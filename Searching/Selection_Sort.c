/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Selection Sort

DATE - 11th NOVEMBER, 2021
***********************************************************/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element: " , i);
        scanf("%d" , &arr[i]);
    }
    // Sorting
    int l;
    for(int i=0 ; i<n ; i++)
    {
        l = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[l])
            {
                l = j;
            }
        }
        if(l != i)
        {
            int temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
        }
    }
    // Printing Sorted Array
    printf("\nSorted Array: ");
    for(int i=0 ; i<n ; i++)
    {
        printf(" %d" , arr[i]);
    }
    return 0;
}
