#include<stdio.h>

//function calling it self to avoid loos
//base case: recrursion part.

//print 1 to 10

//n=1
void printno(int n){

        if(n==11){
            return;
        }

        //recursionve part...
        printf("\n before func call n =%d",n);
        printno(n+1);//2,3,4,5,6,7,8,9,
        //call empty...
        printf("\n after func call n =%d",n);

}

void main()
{
   printno(1); //line 1
}