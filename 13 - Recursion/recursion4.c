#include<stdio.h>


//n=5//n=4//3
int sum(int n){

    //5==0 false
    //4==0..
    //0==0
    if(n==0){
        return 0;
    }

    return n+sum(n-1); 
    
    //return 1+sum(0) = 1+0 =1
    //return 2+sum(1) = 2 +1 =3
    //return 3+sum(2) =3 + 3 = 6
    //return 4+sum(3) 4 + 6 = 10
    // return 5+sum(4)5 + 10 = 15



}

void main()
{
   
    int x;
    x = sum(5);
    printf("\n x = %d",x);
   
}