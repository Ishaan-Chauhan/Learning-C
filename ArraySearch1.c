#include<stdio.h>
int main()
{
    int a[5] , i , serc , found = 0,count = 0;
    printf("\nEnter 5 numbers \n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nWhich element to search: ");
    scanf("%d",&serc);
    for(i=0;i<5;i++)
    {
        if(a[i]==serc)
        {
            found = 1;
            count++;
            
        }else
        {
            found = 0;
            count = 0;
        
        }
    }
    if(found == 1)
    {
        printf("\nThe number %d is found %d times",serc,count);
    }else
    {
        printf("\nThe number %d is not found",serc);
    }
    return 0;
}