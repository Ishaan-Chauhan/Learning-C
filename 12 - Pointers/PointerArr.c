#include<stdio.h>

void main()
{
   
    int a[]={1,2,3,4,5},i;
    int *p;
    p = &a[0]; //84

    for(i=0;i<5;i++){
        printf("\n valud of %d = %d",i,*p++); // 88 92
    }
    
}