#include<stdio.h>



void updateMarks(int **x){

    **x = 81;

}

void main()
{
 
    int marks = 70;
    int *cm  = &marks;
    updateMarks(&cm);
    printf("\n marks after update = %d",marks);
   
}