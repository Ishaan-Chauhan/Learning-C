#include<stdio.h>
int main()
{
    float x, y;
    printf("Enter the x axis : ");
    scanf("%f", &x);
    printf("Enter the y axis : ");
    scanf("%f",&y);
    printf("The coordinates are : (%.2f, %.2f)\n", x, y);
    if(x > 0 && y > 0)
    {
        printf("The point lies in the first quadrant.\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("The point lies in the second quadrant.\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("The point lies in the third quadrant.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("The point lies in the fourth quadrant.\n");
    }
    else if(x == 0 && y != 0)
    {
        printf("The point lies on the y axis.\n");
    }
    else if(y == 0 && x != 0)
    {
        printf("The point lies on the x axis.\n");
    }
    else
    {
        printf("The point is at the origin.\n");
    }
    return 0;
}