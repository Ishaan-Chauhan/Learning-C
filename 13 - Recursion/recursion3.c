#include<stdio.h>

int ans=0; 
void sum(int no){
    
    if(no==0){
        return;
    }
    sum(no-1); //10
    ans = ans+no;
//    printf("\n ans = %d",ans);

}

void main()
{
   
   sum(10);
   printf("\n ans = %d",ans);
}