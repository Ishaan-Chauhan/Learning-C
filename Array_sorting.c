#include<stdio.h>
/*
    Bubble Sort
start - 50 20 40 10 30

phase 1 take first no.
50>20 --> swap
20 50 40 10 30
50>40 --> swap
20 40 50 10 30
50>10 --> swap
20 40 10 50 30
50>30 --swap
20 40 10 30 50

phase 2 
start - 20 40 10 30 50
20>40 --> no swap
now loop takes 2nd no.
40>10 --> swap
20 10 40 30 50
40>30 --> swap
20 10 30 40 50
40>50 --> no swap
20 10 30 40 50

phase 3
start - 20 10 30 40 50
20>10 --> swap
10 20 30 40 50 

loop complete
*/

int main()
{
    int a[5],i,j,temp;
    for(i=0 ; i<5 ; i++)
    {
        printf("\nEnter the elements for %d :" ,i);
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(j=0 ; j<5 ; j++)
        {
            printf("\nThe index = %d & The element = %d",j,a[j]);
        }
    return 0;
}