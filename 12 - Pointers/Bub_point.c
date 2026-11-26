#include <stdio.h>
#include <conio.h>
#define SIZE 5

void main() {
    int a[SIZE];
    int i, temp, j;
    int *p;

    clrscr();
    p = a;

    // Input elements
    for(i = 0; i < SIZE; i++) {
        printf("\nEnter the array ");
        scanf("%d", p + i);
    }

    // Print unsorted array with memory addresses
    printf("\nThe unsorted array is as follows");
    for(i = 0; i < SIZE; i++) {
        printf("\n%d------%u", *(p + i), p + i);
    }

    // Bubble sort using pointers
    for(i = 0; i < SIZE - 1; i++) {
        for(j = 0; j < SIZE - i - 1; j++) {
            if(*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    // Print sorted array with memory addresses
    printf("\nThe sorted array is as follows");
    for(i = 0; i < SIZE; i++) {
        printf("\n%d------%u", *(p + i), p + i);
    }

    getch();
}
