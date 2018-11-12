#include<iostream>
#include<cstdlib>
using namespace std;
int * func(int n)
{
  int *a = (int *)malloc(sizeof(int)*n);
  int j = 5;
  for(int i=0;i<n;i++)
  {
    a[i] = j;
    j++;
  }
 return a;
}
int main()
{
  int *arr = (int *)malloc(sizeof(int) * 10);
   arr = func(10);
  for(int i =0;i<10;i++)
   cout<<arr[i]<<" ";
 
return 0;
}
