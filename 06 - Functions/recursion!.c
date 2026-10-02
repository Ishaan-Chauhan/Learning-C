#include<stdio.h>
void count(int n)
{
    if(n == 11)
    {
        return;
    }
    printf("\n%d ", n);
    count(n + 1);
    printf("\n%d",n);
    printf("\n%d",n);
}


void main()
{

    count(1);
}