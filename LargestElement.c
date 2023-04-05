#include <stdio.h>

int main()
{
  int arr[100],n,i;
  int max =-99999;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++)
{
  scanf("%d", &arr[i]);
  if (arr[i] > max)
{
  max = arr[i];
}
}
  printf("The largest element in the array is: %d", max);
  return 0;
}

