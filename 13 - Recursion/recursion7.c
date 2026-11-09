#include<stdio.h>

//n=123
//n=12
//n=1
//n=0
int sumofdigit(int n){

    if(n==0){
        return 0;
    }

    return n%10+sumofdigit(n/10);

    //1%10+sum...(0)  1+0 =1
    //12%10+sumofdiigt(1) 2+1 =3
    //123%10+sumofdigit(12)3+3 = 6
}

void main()
{
   
    int x;
    x = sumofdigit(123);
    printf("\n x = %d",x);
   
}