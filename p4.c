#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    for(b=1; b<a; b++)
    {
        if(a%b==0)
        {
            sum=sum+b;
            printf("%d ", b);
        }
    }
    
    if(sum==a)
    {
        printf("\n%d is a perfect number", a);
    }
    else
    {
        printf("\n%d is not a perfect number", a);
    }
    return 0;
}//main

 //print factors as 1 * 20 , 2 * 10 , 5 * 4, etc.