#include <stdio.h>

int main()
{
    int a[10], flag, count=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter Value of Array[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nOur Array is : \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nPrime Numbers : ");
    for(int i=0;i<10;i++)
    {
        flag = 1;
        
        // --- FIX ADDED HERE ---
        if (a[i] <= 1) {
            flag = 0; 
        } else {
            for(int j=2;j<=a[i]/2;j++)
            {
                if(a[i] % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        // ----------------------
        
        if(flag == 1){
            printf("%d\t", a[i]);
            count++;
        }
    }
    printf("\nCount = %d", count);
    return 0;
}
