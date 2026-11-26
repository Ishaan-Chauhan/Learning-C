#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, temp;
    int *p, *q;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping: a = %d, b = %d", a, b);
    getch();
}
