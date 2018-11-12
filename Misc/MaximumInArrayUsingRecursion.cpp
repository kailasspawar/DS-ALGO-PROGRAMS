#include<iostream>
using namespace std;

int maxi(int arr[],int max,int n)
{
  if(n < 0)
   return max;

  if(max < arr[n])
   max = arr[n];

  return maxi(arr,max,n-1);
}

int main()
{
  int arr[] = {10,30,20,5,14,9,36,21,23};
   int n = sizeof(arr)/sizeof(arr[0]);
 cout<<maxi(arr,0,n-1)<<endl;

  return 0;
}
