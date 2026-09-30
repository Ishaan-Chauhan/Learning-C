#include<stdio.h>


int getsum(int sp,int ep){

    int i,sum=0;
    for(i=sp;i<=ep;i++){
        sum = sum +i;
    }
    
    return sum;
}



void main()
{
   
    int sp,ep,i,ans=0;
    printf("\n enter sp:");
    scanf("%d",&sp);

    printf("\n enter ep:");
    scanf("%d",&ep);

    ans = getsum(sp,ep);
    printf("\n sum = %d",ans);
}