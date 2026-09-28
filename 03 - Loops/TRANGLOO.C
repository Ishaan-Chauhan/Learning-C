/* 
 * Author - Ishaan 
 * DOC - 23 July (Updated: 2026)
 * Objective - nested loop (for) pattern generator
 */ 

#include <stdio.h>

int main(void) {
    int i, j, n, t;
    char ch;

    printf("Enter the no. of rows: ");
    if (scanf("%d", &n) != 1) {
        return 1; // Exit if input is invalid
    }

    for (t = 1; t <= 4; t++) {
        printf("\nEnter the Character: ");
        // The space before %c skips any leftover newline characters in the buffer
        scanf(" %c", &ch); 

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("%c", ch);
            }
            printf("\n");
        }
    }

    return 0;
}
