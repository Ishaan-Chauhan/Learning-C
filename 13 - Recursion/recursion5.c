#include<stdio.h>

//b=2,exp=3
//b=2,exp=2
//b=2,exp=1
//b=2,exp=0
int power(int b,int exp){

    //-==0
    //2==0
    if(exp==0){
        return 1;
    }
    //return 2*power(2,0) 2 * 1 = 2
    //return 2*power(2,1) 2 * 2 = 4
    //return 2*power(2,2) 2* 4 = 8
    
    
    return b*power(b,exp-1);
    
    
}

void main()
{
    
    int x;
    x = power(2,3);
    printf("\n x = %d",x);
   
}