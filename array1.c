#include<stdio.h>

void main()
{
        int rollno[5],i,sum=0;
        for(i=0;i<5;i++)
        {
            printf("\nEnter Subject marks %d : ",i);
            scanf("%d",&rollno[i]);
        }
        for(i=0;i<5;i++)
        {
                printf("\nSubject:%d Marks:%d",i,rollno[i]);
        }
        for(i=0;i<5;i++)
        {
                sum=sum+rollno[i];

        }
        printf("\nThe Total is : %d",sum);
}   