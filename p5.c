#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("\nThe no of perfect numbers between 1 to 1000 are: ");
    for(a=1; a<=1000; a++)
    {
        sum=0;
        for(b=1; b<a; b++)
        {
            if(a%b==0)
            {
                sum=sum+b;
            }
        }
        if(sum==a)
        {
            printf("\n%d ", a);
        }
    }
    return 0;
}//main