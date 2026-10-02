#include<stdio.h>


int add(){

    int p=1000;
    printf("\n add called..");
    //return 100;
    return p;
}

float div(){

    float pi=3.14;

    return pi;
}


void main()
{
   
    int x;
    float pivalue;
    x = add();
    printf("\n x = %d",x);
    pivalue = div();
    printf("\n pivalue = %.2f",pivalue);
   
}