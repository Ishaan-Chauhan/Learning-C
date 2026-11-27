#include<stdio.h>

struct Car
{
    int cid;
    char cname[20];
    
};


void main()
{
   
    struct Car c = {101,"BMW"};
    struct Car *ptr;
    ptr = &c;
    // -> this pointer
    printf("\n carid = %d",ptr->cid);
    printf("\n carname = %s",ptr->cname);

}