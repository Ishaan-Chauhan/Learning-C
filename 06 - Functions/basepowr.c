#include<stdio.h>

int power(int b,int exp){

    if(exp==0){
        return 1; //1
    }

   
    return b*power(b,exp-1);

}


void main()
{

    power(2,3);
   
}