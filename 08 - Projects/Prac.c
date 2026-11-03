#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_BUCKETS 16
#define MAX_LOAD 0.75
#define LINE_LEN 1024

typedef struct Entry {
    char *key;
    char *value;
    struct Entry *next;
} Entry;

typedef struct {
    Entry **buckets;
    size_t nbuckets;
    size_t count;
} Store;

/* ---------- helpers ---------- */

static char *xstrdup(const char *s) {
    size_t n = strlen(s) + 1;
    char *copy = malloc(n);
    if (copy) memcpy(copy, s, n);
    return copy;
}

/* djb2 string hash */
static size_t hash(const char *s) {
    size_t h = 5381;
    int c;
    while ((c = (unsigned char)*s++) != 0)
        h = ((h << 5) + h) + (size_t)c;
    return h;
}

static void entry_free(Entry *e) {
    free(e->key);
    free(e->value);
    free(e);
}

/* ---------- store ---------- */

static int store_init(Store *s) {
    s->nbuckets = INITIAL_BUCKETS;
    s->count = 0;
    s->buckets = calloc(s->nbuckets, sizeof *s->buckets);
    return s->buckets ? 0 : -1;
}

static void store_free(Store *s) {
    for (size_t i = 0; i < s->nbuckets; i++) {
        Entry *e = s->buckets[i];
        while (e) {
            Entry *next = e->next;
            entry_free(e);
            e = next;
        }
    }
    free(s->buckets);
    s->buckets = NULL;
    s->nbuckets = s->count = 0;
}

/* Double the bucket array and relink every entry. Returns 0 on success. */
static int store_resize(Store *s, size_t new_n) {
    Entry **nb = calloc(new_n, sizeof *nb);
    if (!nb) return -1;

    for (size_t i = 0; i < s->nbuckets; i++) {
        Entry *e = s->buckets[i];
        while (e) {
            Entry *next = e->next;
            size_t idx = hash(e->key) % new_n;
            e->next = nb[idx];
            nb[idx] = e;
            e = next;
        }
    }
    free(s->buckets);
    s->buckets = nb;
    s->nbuckets = new_n;
    return 0;
}

/* Insert or update. Returns 0 on success, -1 on out-of-memory. */
static int store_set(Store *s, const char *key, const char *value) {
    size_t idx = hash(key) % s->nbuckets;

    for (Entry *e = s->buckets[idx]; e; e = e->next) {
        if (strcmp(e->key, key) == 0) {
            char *copy = xstrdup(value);
            if (!copy) return -1;
            free(e->value);
            e->value = copy;
            return 0;
        }
    }

    if ((double)(s->count + 1) / (double)s->nbuckets > MAX_LOAD) {
        if (store_resize(s, s->nbuckets * 2) != 0) return -1;
        idx = hash(key) % s->nbuckets;
    }

    Entry *e = malloc(sizeof *e);
    if (!e) return -1;
    e->key = xstrdup(key);
    e->value = xstrdup(value);
    if (!e->key || !e->value) {
        entry_free(e);
        return -1;
    }
    e->next = s->buckets[idx];
    s->buckets[idx] = e;
    s->count++;
    return 0;
}

static const char *store_get(const Store *s, const char *key) {
    size_t idx = hash(key) % s->nbuckets;
    for (Entry *e = s->buckets[idx]; e; e = e->next)
        if (strcmp(e->key, key) == 0) return e->value;
    return NULL;
}

/* Returns 1 if a key was removed, 0 if it was not found. */
static int store_del(Store *s, const char *key) {
    size_t idx = hash(key) % s->nbuckets;
    Entry **link = &s->buckets[idx];
    while (*link) {
        if (strcmp((*link)->key, key) == 0) {
            Entry *dead = *link;
            *link = dead->next;
            entry_free(dead);
            s->count--;
            return 1;
        }
        link = &(*link)->next;
    }
    return 0;
}

static void store_list(const Store *s) {
    for (size_t i = 0; i < s->nbuckets; i++)
        for (Entry *e = s->buckets[i]; e; e = e->next)
            printf("  %s = %s\n", e->key, e->value);
    printf("(%zu entries, %zu buckets)\n", s->count, s->nbuckets);
}

/* ---------- persistence: one "key value" pair per line ---------- */

static int store_save(const Store *s, const char *path) {
    FILE *f = fopen(path, "w");
    if (!f) return -1;
    for (size_t i = 0; i < s->nbuckets; i++)
        for (Entry *e = s->buckets[i]; e; e = e->next)
            fprintf(f, "%s %s\n", e->key, e->value);
    return fclose(f) == 0 ? 0 : -1;
}

/* Returns number of entries loaded, or -1 if the file can't be opened. */
static int store_load(Store *s, const char *path) {
    FILE *f = fopen(path, "r");
    if (!f) return -1;

    char line[LINE_LEN];
    int loaded = 0;
    while (fgets(line, sizeof line, f)) {
        line[strcspn(line, "\r\n")] = '\0';
        char *space = strchr(line, ' ');
        if (!space) continue; /* skip malformed or blank lines */
        *space = '\0';
        if (store_set(s, line, space + 1) == 0) loaded++;
    }
    fclose(f);
    return loaded;
}

/* ---------- command parsing ---------- */

/* Skip spaces, return the next whitespace-delimited token, advance *p. */
static char *next_token(char **p) {
    while (isspace((unsigned char)**p)) (*p)++;
    if (**p == '\0') return NULL;
    char *start = *p;
    while (**p && !isspace((unsigned char)**p)) (*p)++;
    if (**p) *(*p)++ = '\0';
    return start;
}

static int equals_ignore_case(const char *a, const char *b) {
    while (*a && *b) {
        if (tolower((unsigned char)*a) != tolower((unsigned char)*b)) return 0;
        a++;
        b++;
    }
    return *a == '\0' && *b == '\0';
}

static void print_help(void) {
    puts("Commands:");
    puts("  SET <key> <value...>   store a value (spaces allowed in value)");
    puts("  GET <key>              show a value");
    puts("  DEL <key>              delete a key");
    puts("  LIST                   show everything");
    puts("  SAVE <file>            write the store to a file");
    puts("  LOAD <file>            merge a saved file into the store");
    puts("  HELP                   show this message");
    puts("  EXIT                   quit");
}

int main(void) {
    Store store;
    if (store_init(&store) != 0) {
        fputs("out of memory\n", stderr);
        return 1;
    }

    puts("kvstore - type HELP for commands");
    char line[LINE_LEN];

    for (;;) {
        printf("> ");
        fflush(stdout);
        if (!fgets(line, sizeof line, stdin)) break; /* EOF (Ctrl+D / Ctrl+Z) */

        /* If the line didn't fit, discard the rest of it and warn. */
        if (!strchr(line, '\n') && !feof(stdin)) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            puts("error: line too long (max 1023 characters)");
            continue;
        }
        line[strcspn(line, "\r\n")] = '\0';

        char *p = line;
        char *cmd = next_token(&p);
        if (!cmd) continue;

        if (equals_ignore_case(cmd, "SET")) {
            char *key = next_token(&p);
            while (isspace((unsigned char)*p)) p++;
            if (!key || *p == '\0') {
                puts("usage: SET <key> <value...>");
            } else if (store_set(&store, key, p) != 0) {
                puts("error: out of memory");
            } else {
                puts("OK");
            }
        } else if (equals_ignore_case(cmd, "GET")) {
            char *key = next_token(&p);
            if (!key) {
                puts("usage: GET <key>");
            } else {
                const char *v = store_get(&store, key);
                puts(v ? v : "(not found)");
            }
        } else if (equals_ignore_case(cmd, "DEL")) {
            char *key = next_token(&p);
            if (!key)
                puts("usage: DEL <key>");
            else
                puts(store_del(&store, key) ? "deleted" : "(not found)");
        } else if (equals_ignore_case(cmd, "LIST")) {
            store_list(&store);
        } else if (equals_ignore_case(cmd, "SAVE")) {
            char *path = next_token(&p);
            if (!path)
                puts("usage: SAVE <file>");
            else
                puts(store_save(&store, path) == 0 ? "saved" : "error: could not write file");
        } else if (equals_ignore_case(cmd, "LOAD")) {
            char *path = next_token(&p);
            if (!path) {
                puts("usage: LOAD <file>");
            } else {
                int n = store_load(&store, path);
                if (n < 0)
                    puts("error: could not open file");
                else
                    printf("loaded %d entries\n", n);
            }
        } else if (equals_ignore_case(cmd, "HELP")) {
            print_help();
        } else if (equals_ignore_case(cmd, "EXIT") || equals_ignore_case(cmd, "QUIT")) {
            break;
        } else {
            puts("unknown command (type HELP)");
        }
    }

    store_free(&store);
    return 0;
}