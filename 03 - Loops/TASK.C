/*             
 * Author - Ishaan
 * DOC - 6 Aug 2026
 * Objective - Loop Structures Demonstration (For, While, Do-While)
 * Instructor - Dhiraj Sir
 */

#include <stdio.h>

void clearScreen(void);
void flushInput(void);

int main(void)
{
    int main_choice, sub_choice;
    char ch;
    int i, j;

    do
    {
        clearScreen();

        printf("\nMAIN MENU:\n");
        printf("1-----------For\n");
        printf("2-----------while\n");
        printf("3-----------do while\n");
        printf("4-----------exit\n");
        printf("\nEnter your choice (1-4): ");
        
        if (scanf("%d", &main_choice) != 1) {
            printf("\nInvalid input type! Press Enter to try again...");
            flushInput();
            getchar();
            continue;
        }

        if (main_choice == 4) {
            printf("\nExiting program...\n");
            break;
        }

        if (main_choice < 1 || main_choice > 4) {
            printf("\nInvalid choice! Press Enter to try again...");
            flushInput();
            getchar();
            continue;
        }

        printf("\nSUB MENU:\n");
        printf("1-----print small a...z\n");
        printf("2-----print capital A----Z\n");
        printf("3-----normal triangle\n");
        printf("4-----reverse triangle\n");
        printf("\nEnter your sub-choice (1-4): ");
        
        if (scanf("%d", &sub_choice) != 1) {
            printf("\nInvalid input type! Returning to Main Menu...");
            flushInput();
            getchar();
            continue;
        }

        printf("\nOutput:\n");

        switch (main_choice) {
            case 1: // For Loops
                switch (sub_choice) {
                    case 1:
                        for(ch = 'a'; ch <= 'z'; ch++) { printf("%c ", ch); }
                        break;
                    case 2:
                        for(ch = 'A'; ch <= 'Z'; ch++) { printf("%c ", ch); }
                        break;
                    case 3:
                        for(i = 1; i <= 5; i++) {
                            for(j = 1; j <= i; j++) { printf("* "); }
                            printf("\n");
                        }
                        break;
                    case 4:
                        for(i = 5; i >= 1; i--) {
                            for(j = 1; j <= i; j++) { printf("* "); }
                            printf("\n");
                        }
                        break;
                    default: printf("Invalid Sub Choice!");
                }
                break;

            case 2: // While Loops
                switch (sub_choice) {
                    case 1:
                        ch = 'a';
                        while(ch <= 'z') { printf("%c ", ch); ch++; }
                        break;
                    case 2:
                        ch = 'A';
                        while(ch <= 'Z') { printf("%c ", ch); ch++; }
                        break;
                    case 3:
                        i = 1;
                        while(i <= 5) {
                            j = 1;
                            while(j <= i) { printf("* "); j++; }
                            printf("\n");
                            i++;
                        }
                        break;
                    case 4:
                        i = 5;
                        while(i >= 1) {
                            j = 1;
                            while(j <= i) { printf("* "); j++; }
                            printf("\n");
                            i--;
                        }
                        break;
                    default: printf("Invalid Sub Choice!");
                }
                break;

            case 3: // Do-While Loops
                switch (sub_choice) {
                    case 1:
                        ch = 'a';
                        do { printf("%c ", ch); ch++; } while(ch <= 'z');
                        break;
                    case 2:
                        ch = 'A';
                        do { printf("%c ", ch); ch++; } while(ch <= 'Z');
                        break;
                    case 3:
                        i = 1;
                        do {
                            j = 1;
                            do { printf("* "); j++; } while(j <= i);
                            printf("\n");
                            i++;
                        } while(i <= 5);
                        break;
                    case 4:
                        i = 5;
                        do {
                            j = 1;
                            do { printf("* "); j++; } while(j <= i);
                            printf("\n");
                            i--;
                        } while(i >= 1);
                        break;
                    default: printf("Invalid Sub Choice!");
                }
                break;
        }

        printf("\n\nPress Enter to return to Main Menu...");
        flushInput();
        getchar();

    } while (main_choice != 4);

    return 0;
}

/* Replaces old clrscr() cross-platform using standard ANSI sequences */
void clearScreen(void) {
    printf("\033[H\033[J");
}

/* Clears leftover input data out of the input buffer stream */
void flushInput(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
