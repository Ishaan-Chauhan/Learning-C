#include<stdio.h>


int fac(int n){

    if(n==0){
        return 1;
    }
    printf(" n = %d\n",n);
    return n*fac(n-1);
}

void main()
{
    int ans;
    ans = fac(6);
    printf("ans = %d\n",ans);
}