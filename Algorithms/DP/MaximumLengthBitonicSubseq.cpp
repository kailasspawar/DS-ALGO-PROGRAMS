#include<iostream>
#include<string.h>
using namespace std;

int MaxLengthBitonic(int arr[],int n)
{
   int lis[n] ;
     int lds[n] ;
  fill_n(lis,n,1);

     fill_n(lds,n,1);

   for(int i = 1;i<n;i++)
    for(int j = 0;j<i;j++)
     if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
      lis[i] = lis[j] + 1;

   for(int i = n-2;i>=0;i--)
    for(int j = n-1;j>i;j--)
     if(arr[i] > arr[j] && lds[i] < lds[j] + 1)
      lds[i] = lds[j] + 1;
  
   int maxsum = lis[0]+lds[0] - 1;
   for(int i = 1;i<n;i++)
    if(lis[i] + lds[i] - 1 > maxsum)
      maxsum = lis[i] + lds[i] - 1;
  return maxsum;
}

int main()
{
  int arr[] = {1, 11, 2, 10,4,5,2,1};
		  int n = sizeof(arr)/sizeof(arr[0]);
    cout<<MaxLengthBitonic(arr,n)<<endl;

  return 0;
}
