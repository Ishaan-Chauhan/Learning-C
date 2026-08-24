#include<stdio.h>
int main()
{
    int i , j ,k;
    int a[2][2][2];
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            for(k=0 ; k<2 ; k++)
            {
                printf("Enter the value of a[%d][%d][%d] : ",i,j,k);
                scanf("%d",&a[i][j][k]);
            }
        }

    }
    
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            for(k=0 ; k<2 ; k++)
            {
                printf(" %d ",a[i][j][k]);
            
            }
        printf("\n");
        }
    printf("\n");
    }



    return 0;
}