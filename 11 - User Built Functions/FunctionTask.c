#include<stdio.h>

int max(int arr[], int size) {
    int i;
    int max = arr[0]; 
    
    for (i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max;
}

void main() 
{
   
    int A[] = {12, 45, 2, 78, 33, 56};
    
    
    int size = sizeof(A) / sizeof(A[0]); 
    int maxResult;

    
    maxResult = max(A, size);
    
    printf("\n Maximum number in the array = %d", maxResult);


}
