#include<stdio.h>
int main() {
    int a[3][2];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The values in the array are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}