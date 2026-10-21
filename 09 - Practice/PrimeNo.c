#include<stdio.h>


int prime(int n,int i){

    
    if(n<2){
        return 0;
    }
    
    if(i>n/i){
        return 1; 
    }
    
    if(n%i==0){
        return 0; 
    }

    return prime(n,i+1);
    
}
void main()
{
 
    int ans;
    ans = prime(6,2);
    printf("\n ans = %d",ans);
    if(ans==1){
        printf("\n no is prime");
    }
    else{
        printf("\n no is not prime");
    }

   
}