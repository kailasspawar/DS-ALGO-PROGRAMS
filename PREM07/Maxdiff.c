#include<stdio.h>
int maxdiff(int *a,int n,int ele)
{
  int i,j,si = 0,li = 0;
  for(i=0,j=n-1;i<n,j>=0;i++,j--)
  {
    if(a[i]==ele&&si==0)
      si = i;

    if(a[j]==ele&&li==0)
      li = j;

  }
  printf("%d %d\n",si,li);
 return (li-si);
}
main()
{
  int a[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
  int n = sizeof(a)/sizeof(a[0]);
 printf("%d\n",maxdiff(a,n,4));
return;
}

