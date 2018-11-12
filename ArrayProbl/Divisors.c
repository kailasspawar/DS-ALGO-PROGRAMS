#include<stdio.h>
int main()
{
  int n;
   int sq, i;
   scanf("%d",&n);
   int count = 0;
  sq = n*n;
   for(i=1;i<=n;i++)
   {
       if(sq%i==0&&n%i!=0)
       {
         count++;
       }
   }

  printf("%d",count);
 
 return 0;
}
