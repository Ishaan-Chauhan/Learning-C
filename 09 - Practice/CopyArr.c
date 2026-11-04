#include<stdio.h>

void main()
{
 
    int a[]={1,2,3,4,5},b[5],i;
    //b = a;
    //copy loop..
    for(i=0;i<5;i++){
        b[i] = a[i];
    }


    for(i=0;i<5;i++){
        printf("\n b[%d] = %d",i,b[i]);
    }



   
}