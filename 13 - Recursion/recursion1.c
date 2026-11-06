#include<stdio.h>


void printNo(int no){

    if(no==0){
        return;
    }

    printNo(no-1);
    if(no%2==0)
        printf("\n no = %d",no);


}

void main()
{
 
    printNo(10);
   
}