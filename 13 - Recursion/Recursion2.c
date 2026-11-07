#include<stdio.h>

void printTable(int no,int i){

    if(i==0){
        return;
    }
    printTable(no,i-1);
    printf("\n %d * %d = %d",no,i,no*i);

}

void main()
{
   
   printTable(5,10);
}