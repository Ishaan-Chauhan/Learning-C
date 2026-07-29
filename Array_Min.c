#include<stdio.h>

void main()
{
    int height[5]={4,6,5,7,1},i,min;
    min=height[0];
    for(i=1;i<5;i++)
    {
        if(height[i]<min)
        {
            min=height[i];
        }
    }
    printf("\nThe minimum height is : %d",min);
}