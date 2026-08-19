#include<stdio.h>

void main()
{
    int height[5],i,max;
    max=height[0];
    for(i=1;i<5;i++)
    {
        printf("\nEnter the height :");
        scanf("%d",&height[i]);
    }
    for(i=1;i<5;i++)
    {
        if(height[i]>max)
        {
            max=height[i];
        }
    }
    printf("\nThe maximum height is : %d",max);
}
