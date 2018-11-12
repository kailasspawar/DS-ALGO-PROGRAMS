#include<iostream>
#include<algorithm>
using namespace std;

int maxSum(int arr[],int n)
{
  int sum = 0;
  sort(arr,arr+n);
  for(int i = 0;i<n/2;i++)
  {
    sum-=(2*arr[i]);
    sum+=(2*arr[n-i-1]);
  }

  return sum;
 }

int main()
{
  int arr[]= {1,4,8,2};
   int n = sizeof(arr)/sizeof(arr[0]);
  cout<<maxSum(arr,n)<<endl;

  return 0;
 }
