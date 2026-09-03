#include<stdio.h>
int main()
{
    int num, i, j, start, end, n, temp;
    int a[16];
    
    printf("Enter the starting point :");
    scanf("%d", &start);
    printf("Enter the ending point :");
    scanf("%d", &end);
    
    
    if(start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }
    
    for(n = start; n <= end; n++)
    {
        i = 0;
        num = n;
        
      
        do 
        {
            a[i] = num % 2;
            num = num / 2;
            i++;
        } while(num > 0);
        
        printf("\n%d ---> ", n);
        for(j = i - 1; j >= 0; j--)
        {
            printf("%d ", a[j]); 
        }   
    }
    printf("\n");
    return 0;
}
