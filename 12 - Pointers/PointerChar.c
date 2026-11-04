#include<stdio.h>

void main()
{
 
    char name[]="royal";
    char *p = &name[0];
    int i;

    printf("\n name = %s",name);
    printf("\n address of name = %u",&name);
    printf("\n address of name[0] = %u",&name[0]);
    printf("\n address of name[1] = %u",&name[1]);

    //printf("\n value of *p = %c",*p);
    for(i=0;i<5;i++){
        printf("\n char = %c",*p++);
    }
   
}