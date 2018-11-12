#include<iostream>
using namespace std;
int count = 0;
int sumpair(int a[],int n,int sum)
{
  int i;

  for(i=1;i<=n;i++)
  {
   for(int j=0;j<n-i;j++)
   {
    if(a[j]>a[j+1])
    {
     int temp = a[j];
     a[j] = a[j+1];
     a[j+1] = temp;
    }
   }
 }
  int k=n-1;
  for(i=0;i<n;i++)
  {
    if(a[i]+a[k] == sum)
    {
     count; 
    }
    if(a[i]+a[k] > sum)
       k--;
    else
       i++;

 //   cout<<a[i]+a[k]<<endl;
  }
 return count;
}
int main()
{
  int a[] = {10, 12, 10, 15, -1, 7, 6,5, 4, 2, 1, 1, 1};

    int n = sizeof(a)/sizeof(a[0]);
    cout<<sumpair(a,n,11)<<endl;

  return 0;
}
