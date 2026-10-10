#include<stdio.h>

int HCF(int a,int b){

    if(b==0)
    {
        return a;
    }

    return HCF(b,a%b);

}

void main()
{

    int ans;
    ans = HCF(8,12);
    printf("\n ans = %d",ans);
   
}