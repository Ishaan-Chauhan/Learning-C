#include<stdio.h>


//n=123
int countDigit(int n){
    if(n==0){
        return 0;
    }

    return 1+ countDigit(n/10);
    //1+countdifit(12) 1+ 2 =3
    //1+countdigt(1)    1+1 = 2
    //1+countdigit(0) = 1+0 =1
}

void main()
{
   countDigit(123);
   
}