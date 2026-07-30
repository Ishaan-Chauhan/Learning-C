#include<stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("Enter the three angles in degree : ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    if(angle1 + angle2 + angle3 == 180)
    {
        printf("The angles form a valid triangle.\n");
    }
    else
    {
        printf("The angles do not form a valid triangle.\n");
    }
    return 0;
}