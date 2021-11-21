/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Bubble Sort

DATE - 11th NOVEMBER, 2021

***********************************************************/

#include<stdio.h>

int main()
{
    // Input //
    int n;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element: " , i);
        scanf("%d" , &arr[i]);
    }
    // Sorting //
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Printing Sorted Array //
    printf("\nSorted Array: ");
    for(int i=0 ; i<n ; i++)
    {
        printf(" %d" , arr[i]);
    }
    return 0;
}
