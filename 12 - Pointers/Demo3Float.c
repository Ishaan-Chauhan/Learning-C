#include<stdio.h>

void main()
{
    float a = 10.5;
    float *b;

    printf(" a = %f & address of a = %u \n",a,&a);
    printf(" b = %f & address of b = %u \n",b,&b); 
    
    b = &a;

    printf(" b = %f & address of b = %u \n",*b,&b); 

}