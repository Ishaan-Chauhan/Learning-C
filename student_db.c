/*
    STUDENT_DB.C
    Student Record Management System
    - Uses struct to group related data
    - Stores records in an array of structs
    - Saves/loads records to a file so data isn't lost when program closes

    This builds on MENU_CRE.C style (menu + switch) but adds:
    - struct
    - functions with return values
    - file handling (fopen, fwrite, fread)
*/

#include <stdio.h>
#include <string.h>

#define MAX 50
#define FILENAME "students.dat"

struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student list[MAX];
int count = 0;

void addStudent();
void displayAll();
void searchStudent();
void deleteStudent();
void saveToFile();
void loadFromFile();

int main() {
    int choice;

    loadFromFile();   /* load any previously saved records at startup */

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Delete Student by ID\n");
        printf("5. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAll();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                saveToFile();
                printf("Data saved. Goodbye!\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addStudent() {
    if (count >= MAX) {
        printf("Record list is full!\n");
        return;
    }

    struct Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);   /* reads a full name with spaces */
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    list[count] = s;
    count++;
    printf("Student added successfully.\n");
}

void displayAll() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n%-6s %-20s %-6s\n", "ID", "Name", "Marks");
    for (int i = 0; i < count; i++) {
        printf("%-6d %-20s %-6.2f\n", list[i].id, list[i].name, list[i].marks);
    }
}

void searchStudent() {
    int id, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (list[i].id == id) {
            printf("Found -> Name: %s, Marks: %.2f\n", list[i].name, list[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No student found with ID %d\n", id);
    }
}

void deleteStudent() {
    int id, found = 0;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (list[i].id == id) {
            /* shift every record after this one back by one position */
            for (int j = i; j < count - 1; j++) {
                list[j] = list[j + 1];
            }
            count--;
            found = 1;
            printf("Student deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("No student found with ID %d\n", id);
    }
}

void saveToFile() {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(list, sizeof(struct Student), count, fp);
    fclose(fp);
}

void loadFromFile() {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        return;   /* no file yet, that's fine on first run */
    }
    fread(&count, sizeof(int), 1, fp);
    fread(list, sizeof(struct Student), count, fp);
    fclose(fp);
}