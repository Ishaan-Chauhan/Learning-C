#include<stdio.h>
void factor(int n , int i)
{

    if(i>n){

        return;
    }

    if(n % i == 0)
    {
        printf("%d ",i);

    }


    factor(n,i+1);
}

void main()
{

    factor(10,1);

}