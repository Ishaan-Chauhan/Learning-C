/*
    SORTSRCH.C  (Turbo C++ style)
    Array Sorting & Searching Menu
    - Bubble sort
    - Selection sort
    - Linear search
    - Binary search (array is sorted first)
*/

#include<stdio.h>
#include<conio.h>

#define MAX 50

int arr[MAX];
int n=0;

void inputArray();
void displayArray();
void bubbleSort();
void selectionSort();
void linearSearch();
void binarySearch();

void main()
{
    int choice;
    clrscr();

    do
    {
        printf("\n===== SORTING & SEARCHING =====\n");
        printf("1. Enter Array\n");
        printf("2. Display Array\n");
        printf("3. Bubble Sort\n");
        printf("4. Selection Sort\n");
        printf("5. Linear Search\n");
        printf("6. Binary Search\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                inputArray();
                break;
            case 2:
                displayArray();
                break;
            case 3:
                bubbleSort();
                printf("Array sorted using Bubble Sort.\n");
                break;
            case 4:
                selectionSort();
                printf("Array sorted using Selection Sort.\n");
                break;
            case 5:
                linearSearch();
                break;
            case 6:
                binarySearch();
                break;
            case 7:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=7);

    getch();
}

void inputArray()
{
    int i;

    printf("How many elements (max %d)? ",MAX);
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void displayArray()
{
    int i;

    if(n==0)
    {
        printf("Array is empty. Enter elements first.\n");
        return;
    }

    printf("Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort()
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionSort()
{
    int i,j,minIndex,temp;

    for(i=0;i<n-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}

void linearSearch()
{
    int key,i,found=0;

    printf("Enter number to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Found at position %d\n",i+1);
            found=1;
            break;
        }
    }

    if(!found)
        printf("Not found in array.\n");
}

void binarySearch()
{
    int key,low,high,mid,found=0;

    bubbleSort();   /* binary search needs a sorted array */

    printf("Enter number to search: ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Found at position %d (sorted array)\n",mid+1);
            found=1;
            break;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    if(!found)
        printf("Not found in array.\n");
}
