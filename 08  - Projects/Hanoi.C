/*
    HANOI.C  (Turbo C++ style)
    Tower of Hanoi - classic recursion demo
    - Also counts total moves and shows recursion depth
*/

#include<stdio.h>
#include<conio.h>

long moveCount=0;

void solveHanoi(int n,char from,char aux,char to);

void main()
{
    int disks;
    clrscr();

    printf("===== TOWER OF HANOI =====\n");
    printf("Enter number of disks: ");
    scanf("%d",&disks);

    printf("\nSteps to solve for %d disks:\n\n",disks);
    solveHanoi(disks,'A','B','C');

    printf("\nTotal moves: %ld\n",moveCount);
    printf("(Minimum possible moves = 2^n - 1)\n");

    getch();
}

void solveHanoi(int n,char from,char aux,char to)
{
    if(n==0)
        return;

    solveHanoi(n-1,from,to,aux);

    moveCount++;
    printf("Move disk %d from %c to %c\n",n,from,to);

    solveHanoi(n-1,aux,from,to);
}
