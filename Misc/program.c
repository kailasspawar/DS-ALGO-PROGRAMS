#include<stdio.h>

int main()
{
  int arr[] = {1,2,3,4,5};
  int sum = 0;
  for(int &x:arr)
  {
   sum += x;
   printf("%d ",x);
  }
  printf("\nsum is:%d ",sum);

  return 0;
}
