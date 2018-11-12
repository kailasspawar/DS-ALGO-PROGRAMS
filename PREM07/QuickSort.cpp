#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
  int temp = *a;
   *a = *b;
   *b = temp;
 }
int partition(int a[],int lb,int ub)
{
  int pivot,i,j;
  pivot = a[ub];
  i = (lb-1);
  for(j=lb;j<ub;j++)
  {
    if(a[j]<=pivot)
    {
      i++;
      swap(&a[i],&a[j]);
    }
  }
 swap(&a[i+1],&a[ub]);
 
 return (i+1);
}

void Quicksort(int a[],int lb,int ub)
{
  if(lb<ub)
  {
    int k = partition(a,lb,ub);
    Quicksort(a,lb,k-1);
    Quicksort(a,k+1,ub);
  }
}

int main()
{
 int a[] = {5,9,3,7,6,4,3,10};
 int n = sizeof(a)/sizeof(a[0]);
 Quicksort(a,0,n-1);
 for(int i=0;i<n;i++)
  cout<<a[i]<<endl;
  return 0;
}
