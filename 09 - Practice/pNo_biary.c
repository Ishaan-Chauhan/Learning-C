#include<stdio.h>
int main()
{
    int num,i=0,j;
    int a[16];
    printf("Enter the number to be converted into binary :");
    scanf("%d",&num);

    while(num>0)
    {
        a[i]=num%2;
        num = num/2;
        i++;
    }
    
    for(j=i-1;j>=0;j--)
    {
            printf("%d\t",a[j]);
    }
    return 0;
}