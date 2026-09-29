/*             
 * Author - Ishaan Chauhan
 * DOC - 13 Aug (Updated: 2026)
 * Objective - 1D Array and 2D Matrix Mathematical Operations Terminal Tool
 */

#include <stdio.h>

#define SIZE 3    // Capitalized macro matching standard convention

int main(void)
{
    int a[SIZE], b[SIZE], c[SIZE]; 
    int x[SIZE][SIZE], y[SIZE][SIZE], z[SIZE][SIZE]; 
    int i, j, choice = 0, choice1, choice2; 

    printf("Enter the values for Array :\n");

Single:    
    for (i = 0; i < SIZE; i++)
    {
        printf("a[%d] : ", i);
        if (scanf("%d", &a[i]) != 1) return 1;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("b[%d] : ", i);
        if (scanf("%d", &b[i]) != 1) return 1;
    }
    if (choice == 1)
    {
        goto EndScan;
    }

Multi: 
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("x[%d][%d] : ", i, j);
            if (scanf("%d", &x[i][j]) != 1) return 1;
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("y[%d][%d] : ", i, j);
            if (scanf("%d", &y[i][j]) != 1) return 1;
        }
    }

EndScan:
Operation:
    printf("\n1 ----- Rescan Single Dimensions");
    printf("\n2 ----- Rescan Multi Dimensions");
    printf("\n3 ----- Operations on Single Dimensions");
    printf("\n4 ----- Operations on Multi Dimensions");
    printf("\n5 ----- Exit\n");
    printf("Enter the choice : ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice)
    {
        case 1: 
            goto Single;
            break;

        case 2: 
            goto Multi;
            break;

        case 3:
            printf("\n1 ----- Addition");
            printf("\n2 ----- Subtraction");
            printf("\n3 ----- Multiplication");
            printf("\n4 ----- Division");
            printf("\n5 ----- Exit ");
            printf("\nEnter the choice : ");
            if (scanf("%d", &choice1) != 1) return 1;
            
            switch (choice1)
            {
                case 1:
                    for (i = 0; i < SIZE; i++) {
                        c[i] = a[i] + b[i];
                        printf("%d + %d = %d \n", a[i], b[i], c[i]);
                    }
                    break;
                case 2:
                    for (i = 0; i < SIZE; i++) {
                        c[i] = a[i] - b[i];
                        printf("%d - %d = %d \n", a[i], b[i], c[i]);
                    }
                    break;
                case 3:
                    for (i = 0; i < SIZE; i++) {
                        c[i] = a[i] * b[i];
                        printf("%d * %d = %d \n", a[i], b[i], c[i]);
                    }
                    break;
                case 4:
                    for (i = 0; i < SIZE; i++) {
                        if (b[i] == 0) {
                            printf("%d / 0 = Undefined (Zero Division Error)\n", a[i]);
                            continue;
                        }
                        c[i] = a[i] / b[i];
                        printf("%d / %d = %d \n", a[i], b[i], c[i]);
                    }
                    break;
                case 5: 
                    goto Operation;
            }
            goto Operation;
            break;

        case 4:
            printf("\n1 ----- Addition");
            printf("\n2 ----- Subtraction");
            printf("\n3 ----- Multiplication");
            printf("\n4 ----- Division");
            printf("\n5 ----- Exit ");
            printf("\nEnter the choice : ");
            if (scanf("%d", &choice2) != 1) return 1;

            switch (choice2)
            {
                case 1:
                    for (i = 0; i < SIZE; i++) {
                        for (j = 0; j < SIZE; j++) {
                            z[i][j] = x[i][j] + y[i][j];
                            printf("%d + %d = %d \n", x[i][j], y[i][j], z[i][j]);
                        }
                    }
                    break;
                case 2:
                    for (i = 0; i < SIZE; i++) {
                        for (j = 0; j < SIZE; j++) {
                            z[i][j] = x[i][j] - y[i][j];
                            printf("%d - %d = %d \n", x[i][j], y[i][j], z[i][j]);
                        }
                    }
                    break;
                case 3:
                    // Note: This performs element-wise multiplication, not standard matrix multiplication
                    for (i = 0; i < SIZE; i++) {
                        for (j = 0; j < SIZE; j++) {
                            z[i][j] = x[i][j] * y[i][j];
                            printf("%d * %d = %d \n", x[i][j], y[i][j], z[i][j]);
                        }
                    }
                    break;
                case 4:
                    for (i = 0; i < SIZE; i++) {
                        for (j = 0; j < SIZE; j++) {
                            if (y[i][j] == 0) {
                                printf("%d / 0 = Undefined (Zero Division Error)\n", x[i][j]);
                                continue;
                            }
                            z[i][j] = x[i][j] / y[i][j];
                            printf("%d / %d = %d \n", x[i][j], y[i][j], z[i][j]);
                        }
                    }
                    break;
                case 5: 
                    goto Operation;
            }
            goto Operation;
            break;

        case 5:
            printf("Exiting Program...\n");
            break;
            
        default:
            printf("Invalid selection!\n");
            goto Operation;
    }

    return 0;
}
