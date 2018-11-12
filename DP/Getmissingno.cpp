#include<iostream>
using namespace std;

int missing(int arr[],int n)
{
  int xorr = arr[0];
 
  for(int i = 1;i<n;i++)
   xorr^=arr[i];

  for(int i = 1;i<=n+1;i++)
   xorr^=i;

  return xorr;
 }

int main()
{
  int arr[] = {1,2,5,4,6};
    int n = 5;
  cout<<missing(arr,n)<<endl;
 return 0;
}
