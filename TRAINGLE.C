/* 
 * Author - Ishaan 
 * Objective - Multi-triangle pattern generator with modern terminal colors
 */ 

#include <stdio.h>

int main(void) {
    int i, r, t, k, choice, c;
    // ANSI color strings: [0] Reset, [1] Blue, [2] Green
    const char* colors[] = {"\033[0m", "\033[34m", "\033[32m"};

    printf("Which type of triangle\n");
    printf("Press 1 for reverse\n");
    printf("Press 2 for normal\n");
    printf("Enter choice : ");
    if (scanf("%d", &choice) != 1) return 1;

    // Validate choice
    if (choice != 1 && choice != 2) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter the no of rows : ");
    if (scanf("%d", &r) != 1) return 1;

    printf("\nChoose Color :\n");
    printf("Blue : 1\n");
    printf("Green : 2\n");
    printf("Which Color : ");
    if (scanf("%d", &c) != 1) return 1;

    // Restrict choice to available colors (1 or 2), fallback to default otherwise
    if (c < 1 || c > 2) {
        c = 0; // Default text color if input is wrong
    }

    switch(choice) {
        case 1: // Reverse Pattern
            for (k = 4; k >= 1; k--) {
                for (t = 1; t <= r; t++) {
                    // Set color before printing the asterisks
                    printf("%s", colors[c]);
                    for (i = 0; i < k; i++) {       
                        printf("*");
                    }
                    // Reset color before printing layout tabs
                    printf("%s", colors[0]);
                    printf("\t");
                }
                printf("\n");
            }
            break;

        case 2: // Normal Pattern
            for (k = 1; k <= 4; k++) {
                for (t = 1; t <= r; t++) {
                    printf("%s", colors[c]);
                    for (i = 0; i < k; i++) {       
                        printf("*");
                    }
                    printf("%s", colors[0]);
                    printf("\t");
                }
                printf("\n");
            }
            break;
    }

    return 0;
}