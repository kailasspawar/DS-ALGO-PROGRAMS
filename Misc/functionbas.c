#include <stdio.h>
int main()
{
    char a = '\012';
    void *value;
   value = (int *)20;
  printf("%d\n",value); 
 //   printf("%d", a);
  int arr[4] = {1};
//  int n = (&arr+1);
  for(int i = 0;i<4;i++)
   printf("%d\n",arr[i]); 
    return 0;
}
