#include <stdio.h>

int main()
{
    int a[10], choice, count = 0;

    
    for(int i = 0; i < 10; i++)
    {
        printf("Enter Value of Array[%d] = ", i);
        scanf("%d", &a[i]);
    }

  
    printf("\nOur Array is : \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    
    printf("\n\n--- MENU ---");
    printf("\n1. Count Odd Numbers");
    printf("\n2. Count Even Numbers");
    printf("\n3. Count Prime Numbers");
    printf("\n4. Count Palindrome Numbers");
    printf("\n5. Count Perfect Numbers");
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

   
    switch(choice)
    {
        case 1:
            printf("\nOdd Numbers : ");
            for(int i = 0; i < 10; i++)
            {
                if(a[i] % 2 != 0)
                {
                    printf("%d\t", a[i]);
                    count++;
                }
            }
            break;

        case 2:
            printf("\nEven Numbers : ");
            for(int i = 0; i < 10; i++)
            {
                if(a[i] % 2 == 0)
                {
                    printf("%d\t", a[i]);
                    count++;
                }
            }
            break;

        case 3:
            printf("\nPrime Numbers : ");
            for(int i = 0; i < 10; i++)
            {
                int flag = 1;
                if(a[i] <= 1)
                {
                    flag = 0;
                }
                else
                {
                    for(int j = 2; j <= a[i] / 2; j++)
                    {
                        if(a[i] % j == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                if(flag == 1)
                {
                    printf("%d\t", a[i]);
                    count++;
                }
            }
            break;

        case 4:
            printf("\nPalindrome Numbers : ");
            for(int i = 0; i < 10; i++)
            {
                int temp = a[i];
                int reversed = 0;
                while(temp > 0)
                {
                    int rem = temp % 10;
                    reversed = (reversed * 10) + rem;
                    temp /= 10;
                }
                if(a[i] == reversed)
                {
                    printf("%d\t", a[i]);
                    count++;
                }
            }
            break;

        case 5:
            printf("\nPerfect Numbers : ");
            for(int i = 0; i < 10; i++)
            {
                int sum = 0;
                if (a[i] > 1)
                {
                    for(int j = 1; j <= a[i] / 2; j++)
                    {
                        if(a[i] % j == 0)
                        {
                            sum += j;
                        }
                    }
                }
                if(sum == a[i])
                {
                    printf("%d\t", a[i]);
                    count++;
                }
            }
            break;

        default:
            printf("\nInvalid Choice!");
            return 0;
    }

   
    printf("\nCount = %d\n", count);
    return 0;
}
