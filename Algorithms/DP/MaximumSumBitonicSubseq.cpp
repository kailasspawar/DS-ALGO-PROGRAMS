#include<iostream>
using namespace std;

int maxsumBitonic(int arr[],int n)
{
  int lis[n];
    int lds[n] ;
  
 for(int i = 0;i<n;i++)
 {
  lis[i] = arr[i];
   lds[i] = arr[i];
 }
 for(int i = 1;i<n;i++)
   for(int j = 0;j<i;j++)
    if(arr[i] > arr[j] && lis[i] < lis[j] + arr[i])
     lis[i] = lis[j] + arr[i];
  lds[n-1] = arr[n-1];

  for(int i = n-2;i>=0;i--)
   for(int j = n-1;j>i;j--)
    if(arr[i] > arr[j] && lds[i] < lds[j] + arr[i])
     lds[i] = lds[j] + arr[i];

  int maxsum = 0;
  for(int i = 0;i<n;i++)
    maxsum = max(maxsum,lis[i] + lds[i] - arr[i]);

  return maxsum;
}

int main()
{
         int arr[]= {1 , 15 ,51 ,45 ,33 ,100 ,12 ,18 ,9};
     int n = sizeof(arr)/sizeof(arr[0]);
   cout<<maxsumBitonic(arr,n)<<endl;
  return 0;
}
