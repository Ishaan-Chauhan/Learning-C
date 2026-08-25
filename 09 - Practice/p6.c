#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50,60,70} , i ,sum=0 ,size;
    printf("sizeof(int) = %d\n",sizeof(int));
    printf("sizeof(float) = %d\n",sizeof(float));
    printf("sizeof(char) = %d\n",sizeof(char));
    size = sizeof(a)/sizeof(a[0]);
    
    for(i=0 ; i<size ; i++)
    {
        sum = sum + a[i];
    }
    for(i=0 ; i<size ; i++)
    {
        printf("%d + ",a[i]);
    }
    printf("\b\b\b = %d",sum);
    return 0;

}
