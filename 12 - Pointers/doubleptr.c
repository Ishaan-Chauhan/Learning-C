#include<stdio.h>
//a -->&a -->*ptr --->&ptr ---> **ptr
void main()
{
   
    int a =10;
    int *ptr;
    int **p;
    ptr = &a;
    p = &ptr;
    

    printf("\n value of a = %d",a);
    printf("\n value pf ptr = %d",*ptr);
    printf("\n value of p = %d",**p);

    **p = 20;
    printf("\n value of a = %d",a);
   
}