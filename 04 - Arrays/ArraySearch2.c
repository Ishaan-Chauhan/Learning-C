#include <stdio.h>
int main()
{
    int a[5] , i , serc , found = 0,index = -1;
    printf("Enter the elements of the array: \n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&serc);
    for(i=0;i<5;i++)
    {
        if(a[i]==serc)
        {
            found = 1;
            index = i;
            break;
        }
    }
    if(found == 1)
    {
        printf("Element found at index %d \n",i);
    }
    else
    {
        printf("Element not found\n index: %d",i);
    }
    return 0;
}
