#include<stdio.h>
int main()
{
    float side1, side2 ,side3, side4, area1, area2;
    printf("Enter the length of first side : ");
    scanf("%f", &side1);
    printf("Enter the length of second side : ");
    scanf("%f", &side2);
    printf("Enter the length of third side : ");
    scanf("%f", &side3);
    printf("Enter the length of fourth side : ");
    scanf("%f", &side4);
    printf("The lengths of the sides are : %.2f, %.2f, %.2f, %.2f\n", side1, side2, side3, side4);
    if(side1  == side2 == side3 == side4)
    {
        printf("the quadrilateral is a square.\n");
        area1 = side1 * side2;
        printf("the area of the square is : %.2f\n", area1);
    }else if(side1 == side3 && side2 == side4)
    {
        printf("the quadrilateral is a rectangle.\n");
        area2 = side1 * side2;
        printf("the area of the rectangle is : %.2f\n", area2);
    }
    else
    {
        printf("the quadrilateral is a general quadrilateral.\n");
    }
    return 0;
}