/*
				Author - Ishaan Chauhan
				Objective - Task by Dhiraj sir
				DOC - 18 Sept 2026
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    /* Main menu choices */
    int choice, sub;

    /* Variables for 1D Array */
    int n, i, j, key, flag, temp, low, high, mid;
    int a[3], b[3], res[3];
    float res_div[10];

    /* Variables for 2D Array */
    int r, c, r1, c1, r2, c2, k;
    int a2[3][3], b2[3][3], res2[3][3];
    float res_div2[3][3];
    int temp_1d[100], count;
    int row, col;

    while(1) {
        clrscr();
        printf("\n================ MAIN MENU ================\n");
        printf("1. Single Dimension Array Operations\n");
        printf("2. Multi Dimension Array (2D) Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            /* =========================================================
               1D ARRAY OPERATIONS
               ========================================================= */
            case 1:
                clrscr();
                printf("\n--- 1D Array Menu ---\n");
                printf("1. Addition of two arrays\n");
                printf("2. Subtraction of two arrays\n");
                printf("3. Multiplication of two arrays\n");
                printf("4. Division of two arrays\n");
                printf("5. Bubble Sort\n");
                printf("6. Linear Search\n");
                printf("7. Binary Search\n");
                printf("Enter choice: ");
                scanf("%d", &sub);

                switch(sub) {
                    /* Addition, Subtraction, Multiplication, Division */
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        printf("Enter number of elements (max 3): ");
                        scanf("%d", &n);

                        printf("Enter %d elements for First Array:\n", n);
                        for(i = 0; i < n; i++) scanf("%d", &a[i]);

                        printf("Enter %d elements for Second Array:\n", n);
                        for(i = 0; i < n; i++) scanf("%d", &b[i]);

                        printf("\nResulting Array:\n");
                        for(i = 0; i < n; i++) {
                            switch(sub) {
                                case 1:
                                    res[i] = a[i] + b[i];
                                    printf("%d ", res[i]);
                                    break;
                                case 2:
                                    res[i] = a[i] - b[i];
                                    printf("%d ", res[i]);
                                    break;
                                case 3:
                                    res[i] = a[i] * b[i];
                                    printf("%d ", res[i]);
                                    break;
                                case 4:
                                    if (b[i] == 0) {
                                        printf("0.00 ");
                                    } else {
                                        res_div[i] = (float)a[i] / b[i];
                                        printf("%.2f ", res_div[i]);
                                    }
                                    break;
                            }
                        }
                        break;

                    /* Bubble Sort */
                    case 5:
                        printf("Enter number of elements (max 3): ");
                        scanf("%d", &n);

                        printf("Enter %d elements:\n", n);
                        for(i = 0; i < n; i++) scanf("%d", &a[i]);

                        for(i = 0; i < n-1; i++) {
                            for(j = 0; j < n-i-1; j++) {
                                if(a[j] > a[j+1]) {
                                    temp = a[j];
                                    a[j] = a[j+1];
                                    a[j+1] = temp;
                                }
                            }
                        }

                        printf("\nSorted Array:\n");
                        for(i = 0; i < n; i++) printf("%d ", a[i]);
                        break;

                    /* Linear Search */
                    case 6:
                        printf("Enter number of elements (max 3): ");
                        scanf("%d", &n);

                        printf("Enter %d elements:\n", n);
                        for(i = 0; i < n; i++) scanf("%d", &a[i]);

                        printf("Enter element to search: ");
                        scanf("%d", &key);
                        flag = 0;

                        for(i = 0; i < n; i++) {
                            if(a[i] == key) {
                                printf("\nElement found at index %d", i);
                                flag = 1;
                                break;
                            }
                        }
                        if(flag == 0) printf("\nElement not found!");
                        break;

                    /* Binary Search */
                    case 7:
                        printf("Enter number of elements (max 3): ");
                        scanf("%d", &n);

                        printf("Enter %d elements:\n", n);
                        for(i = 0; i < n; i++) scanf("%d", &a[i]);

                        printf("Enter element to search: ");
                        scanf("%d", &key);
                        flag = 0;

                        /* Sort array first */
                        for(i = 0; i < n-1; i++) {
                            for(j = 0; j < n-i-1; j++) {
                                if(a[j] > a[j+1]) {
                                    temp = a[j];
                                    a[j] = a[j+1];
                                    a[j+1] = temp;
                                }
                            }
                        }
                        printf("(Sorted array: ");
                        for(i = 0; i < n; i++) printf("%d ", a[i]);
                        printf(")\n");

                        low = 0;
                        high = n - 1;
                        while(low <= high) {
                            mid = (low + high) / 2;
                            if(a[mid] == key) {
                                printf("\nElement found at index %d", mid);
                                flag = 1;
                                break;
                            }
                            else if(a[mid] < key) low = mid + 1;
                            else high = mid - 1;
                        }

                        if(flag == 0) printf("\nElement not found!");
                        break;

                    default:
                        printf("\nInvalid choice!");
                }

                printf("\n\nPress any key to return to Main Menu...");
                getch();
                break;

            /* =========================================================
               2D ARRAY OPERATIONS
               ========================================================= */
            case 2:
                clrscr();
                printf("\n--- 2D Array Menu ---\n");
                printf("1. Addition of two 2D arrays\n");
                printf("2. Subtraction of two 2D arrays\n");
                printf("3. Matrix Multiplication (Row x Column)\n");
                printf("4. Division of two 2D arrays\n");
                printf("5. Bubble Sort\n");
                printf("6. Linear Search\n");
                printf("7. Binary Search\n");
                printf("Enter choice: ");
                scanf("%d", &sub);

                switch(sub) {
                    /* Addition, Subtraction, Division */
                    case 1:
                    case 2:
                    case 4:
                        printf("Enter rows and columns (e.g., 2 2): ");
                        scanf("%d %d", &r, &c);

                        printf("Enter elements of First Matrix:\n");
                        for(i = 0; i < r; i++) {
                            for(j = 0; j < c; j++) scanf("%d", &a2[i][j]);
                        }

                        printf("Enter elements of Second Matrix:\n");
                        for(i = 0; i < r; i++) {
                            for(j = 0; j < c; j++) scanf("%d", &b2[i][j]);
                        }

                        printf("\nResult Matrix:\n");
                        for(i = 0; i < r; i++) {
                            for(j = 0; j < c; j++) {
                                switch(sub) {
                                    case 1:
                                        res2[i][j] = a2[i][j] + b2[i][j];
                                        printf("%d\t", res2[i][j]);
                                        break;
                                    case 2:
                                        res2[i][j] = a2[i][j] - b2[i][j];
					printf("%d\t", res2[i][j]);
					break;
				    case 4:
					if(b2[i][j] == 0) {
					    printf("0.0\t");
					} else {
					    res_div2[i][j] = (float)a2[i][j] / b2[i][j];
					    printf("%.2f\t", res_div2[i][j]);
					}
					break;
				}
			    }
			    printf("\n");
			}
			break;

		    /* Matrix Multiplication (Row x Column) */
		    case 3:
			printf("Enter rows and cols for First Matrix: ");
			scanf("%d %d", &r1, &c1);
			printf("Enter rows and cols for Second Matrix: ");
			scanf("%d %d", &r2, &c2);

			if (c1 != r2) {
			    printf("\nMultiplication not possible! Cols of 1st must match Rows of 2nd.");
			} else {
			    printf("Enter First Matrix:\n");
			    for(i = 0; i < r1; i++) {
				for(j = 0; j < c1; j++) scanf("%d n", &a2[i][j]);
			    }

			    printf("Enter Second Matrix:\n");
			    for(i = 0; i < r2; i++) {
				for(j = 0; j < c2; j++) scanf("%d", &b2[i][j]);
			    }

			    /* Standard Row x Column calculation */
			    for(i = 0; i < r1; i++) {
				for(j = 0; j < c2; j++) {
				    res2[i][j] = 0;
				    for(k = 0; k < c1; k++) {
					res2[i][j] = res2[i][j] + (a2[i][k] * b2[k][j]);
				    }
				}
			    }

			    printf("\nResult of Matrix Multiplication:\n");
			    for(i = 0; i < r1; i++) {
				for(j = 0; j < c2; j++) printf("%d\t", res2[i][j]);
				printf("\n");
			    }
			}
			getch();
			break;

		    /* Bubble Sort */
		    case 5:
			printf("Enter rows and columns: ");
			scanf("%d %d", &r, &c);

			count = 0;
			printf("Enter elements:\n");
			for(i = 0; i < r; i++) {
			    for(j = 0; j < c; j++) {
				scanf("%d", &a2[i][j]);
				temp_1d[count] = a2[i][j];
				count++;
			    }
			}

			for(i = 0; i < count-1; i++) {
			    for(j = 0; j < count-i-1; j++) {
				if(temp_1d[j] > temp_1d[j+1]) {
				    temp = temp_1d[j];
				    temp_1d[j] = temp_1d[j+1];
				    temp_1d[j+1] = temp;
				}
			    }
			}

			count = 0;
			printf("\nSorted Matrix:\n");
			for(i = 0; i < r; i++) {
			    for(j = 0; j < c; j++) {
				a2[i][j] = temp_1d[count];
				count++;
				printf("%d\t", a2[i][j]);
			    }
			    printf("\n");
			}
			break;

		printf("\n\nPress any key to return to Main Menu...");
		getch();
		break;
	    }
	    break;
	    /* =========================================================
	       EXIT
	       ========================================================= */
	    case 3:
                exit(0);

            default:
                printf("\nInvalid choice! Press any key...");
                getch();
        }
    }
}