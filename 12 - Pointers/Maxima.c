#include <stdio.h>
#include <conio.h>

void main() {
    int a[5], i, max, min;
    int *p;
    clrscr();

    p = a;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    max = *p;
    min = *p;

    for(i = 1; i < 5; i++) {
        if(*(p + i) > max) {
            max = *(p + i);
        }
        if(*(p + i) < min) {
            min = *(p + i);
        }
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    getch();
}
