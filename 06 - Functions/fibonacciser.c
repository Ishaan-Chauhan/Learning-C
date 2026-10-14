#include<stdio.h>


void main()
{
   
    int a=0,b=1,i,sum=0;

    printf("\n %d %d",a,b); //0 1

    for(i=1;i<=10;i++){


        sum = a +b;
        printf(" %d ",sum); //0 1 1 2 3

        a = b;
        b = sum;
        
    }
    
}