#include<stdio.h>

void main()
{
    int marks[5],i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter marks for subject %d : ",i);
        scanf("%d",&marks[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("\nSubject:%d Marks:%d",i,marks[i]);
    }
}