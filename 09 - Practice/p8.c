/* Palindrom number */

#include<stdio.h>
int main()
{
    int Start,End,a,b,sum=0;
    printf("Enter number start :\n");
    scanf("%d",&Start);
    printf("Enter number end :\n");
    scanf("%d",&End);
    for(a=Start ; a<=End ; a++)
    {
        b=a;
        sum=0;
        while(b>0)
        {
            sum=sum*10+b%10;
            b=b/10;
        }
        if(sum==a)
        {
            printf("%d is a palindrome number\n",a);
        }
    }
     
    
    return 0;
}    