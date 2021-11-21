/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Binary Sort

DATE - 11th NOVEMBER, 2021
***********************************************************/

#include<stdio.h>

int main()
{
  int n,x,loc=-1;
  printf("Enter the size of array: ");
  scanf("%d" , &n);
  int arr[n];

  //Array should be sorted//
  for(int i=0 ; i<n ; i++)
  {
    printf("Enter the %dth element of array: ",i);
    scanf("%d" , &arr[i]);
  }
  printf("\nEnter the element to be searched: ");
  scanf("%d" , &x);

  //Sorting//
  int left=0 , right=n-1 , mid=(left+right)/2;
  while(left<=right)
  {
    if(arr[mid] == x)
    {
      loc = mid;
      break;
    }
    else if(arr[mid] < x)
    {
      left = mid+1;
    }
    else
    {
      right = mid-1;
    }
  }

  if(loc == -1)
  {
    printf("\nNot Found");
  }
  else
  {
    printf("\n%d is found at %d" , x,loc);
  }
  return 0;
}
