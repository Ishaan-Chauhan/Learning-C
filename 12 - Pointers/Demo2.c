#include<stdio.h>

void main()
{
    int a = 10;
    int *b;

    printf("Value before copy a = %d\n",a);
    printf("Address before copy a = %u\n",&a);

    b = &a;
    *b = 200;
    printf("Vlaue after copy a = %d\n",a);
    printf("Address after copy a = %u\n",&a);
    printf("Value of b after copy b = %d",b);




}