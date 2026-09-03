#include<stdio.h>
int main()
{
    int num,i,j , start , end , n;
    int a[16];
    printf("Enter the starting point :");
    scanf("%d",&start);
    printf("Enter the ending point :");
    scanf("%d",&end);

    for(n=start;n<=end;n++)
    {
        i=0;
        num = n;
        while(num>0)
        {
            a[i]=num%2;
            num = num/2;
            i++;
        }
        printf("\n%d --->",n);
        for(j=i-1;j>=0;j--)
        {
                printf("%d\t ",a[j]);
        }   
    }
    return 0;
}
