#include<stdio.h>


int power(int b,int exp){

    if(exp==0){
        return 1;
    }

    return b * power(b,exp-1);

}
void main()
{

    int ans;
    ans = power(2,5);
    printf("\n ans = %d",ans);
   
}