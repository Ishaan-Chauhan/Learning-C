#include<stdio.h>

int demo()
{
    printf("\nthe Funtion is Called");

}

int add()
{
    int a= 10 , b = 20 , c = 0 ;
    c =  a + b;
    printf("\n the sum is %d",c);

}
int sub()
{
    int d=2 , e=5 , f=0;
    f=e-d;
    printf("\nthe subtraction is %d",f);

}
int div()
{
    float a= 10 , b = 20 , c = 0 ;
    c =  a + b;
    printf("\n the sum is .2%f",c);

}

int main()
{
    printf("\nthis is main function");
    demo();
    add();
    sub();
    div();
}