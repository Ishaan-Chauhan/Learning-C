#include<stdio.h>
int main()
{
    // 1. Properly declare a 9x9 2D array
    int a[3][3] , b[9];
    int i, j , k=0;

    // 2. Nested loop to take input for all rows and columns
    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 3 ; j++)
        {
            printf("Enter element for a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Nested loop to print the grid structure
    printf("\nThe 2D Array is : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // 4. Convert 2D Array to 1D Array
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            b[k] = a[i][j]; 
            k++;            
        }
    }

    // 5. Print the final 1D Array
    printf("\nThe 1D Array is : \n");
    for(i = 0; i < 9; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");

    //6. Sort the 1D Array in Ascending Order
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 9; j++)
        {
            if(b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    // 7. Print the sorted 1D Array
    printf("\nThe sorted 1D Array is : \n");
    for(i = 0; i < 9; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    
    // 8. convert the sorted 1D Array back to 2D Array
    k = 0; // Reset k to 0 for reusing it  
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            a[i][j] = b[k]; 
            k++;            
        }
    }
    // 9. Print the final sorted 2D Array
    printf("\nThe sorted 2D Array is : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
