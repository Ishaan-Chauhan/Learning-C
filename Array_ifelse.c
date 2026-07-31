#include<stdio.h>
int main()
{
    int arr[10], i;
  
    for(i = 0; i < 10; i++)
    {
         printf("Enter 10 elements of the array:\n");
         scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if (arr[i]%2==0 )
        {
            printf("index : %d and element : %d\n", i, arr[i]);
        }
        
    }
    return 0;
}