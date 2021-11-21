/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Linear Sort

DATE - 11th NOVEMBER, 2021
***********************************************************/

#include<stdio.h>

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d" , &n);
  int arr[n];
  printf("Enter Array Elements:\n");

  for(int i=0 ; i<n ; i++)
  {
    printf("\nEnter the %dth element: " , i);
    scanf("%d" , &arr[i]);
  }

  printf("\nEnter the array element to be found: ");
  int x , loc = -1;
  scanf("%d" , &x);

  for(int i=0 ; i<n ; i++)
  {
    if(arr[i] == x)
    {
      loc = i;
      break;
    }
  }

  if(loc != -1)
  {
    printf("%d is found at %d" , x,loc);
  }
  else
  {
    printf("%d is not found" , x);
  }

  return 0;
}
