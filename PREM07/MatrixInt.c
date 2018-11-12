#include<stdio.h>
#include<stdlib.h>
int** summat(int **a)
{
   int c[2][2];
  int j,i;
  for(i=0;i<2;i++)
   for(j=0;j<2;j++)
     c[i][j]=a[i][j];
 
 return c ;
}

void main()
{
  int m[2][2];
   int i,j;
  printf("Enter the 2x2 matrix\n");
  for(i=0;i<2;i++)
   for(j=0;j<2;j++)
    scanf("%d",&m[i][j]);

  int**  k = summat(m);
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("%d\t",k[i][j]);
   }
   printf("\n");
 }
}


