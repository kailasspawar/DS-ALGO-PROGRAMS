#include<stdio.h>
#include<stdlib.h>
int*  funct(int arr[][])
{
  int i,j,m=0,k=0;
 // int n = sizeof(a)/sizeof(a[0]);
  char *b ;
  b = (char *)malloc(20*sizeof(char));
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
    {
      if(arr[i][j]==p[k])
      {
        b[m++] = arr[i][j];
           k++;
      }
    }
  }
//  return (b);
 }
     
 
int main()
{
  char a[4][4] = {'a','b','c','d',
          'a','d','c','b',
          'a','c','d','b',
          'b','c','d','e'};
    char p[] = {'a','b','c','b'}
   char *arr1;
        arr1  = funct(a,p);
  int i;
  for(i=0;i<20;i++)
    printf("%c\t",arr1[i]);

  return 0;
}
