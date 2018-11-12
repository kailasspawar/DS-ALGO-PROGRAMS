#include<iostream>
#include<algorithm>
using namespace std;
int maxlen(int arr[],int n)
{
  int prod[n];
  if(arr[0]==0)
   prod[0] = 1;
  else
   prod[0] = arr[0];
  for(int i = 1;i<n;i++)
  {
    prod[i] = prod[i-1] * arr[i];

    if(arr[i]==0)
      prod[i] = 1;
  }
// for(int i = 0;i<n;i++)
//  cout<<prod[i]<<" ";
// cout<<endl;
  int max = *max_element(prod,prod+n);  
  return max;
}

int main()
{
  int arr[] = {1, -2, -3, 0, 7, -8, -2};
      int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxlen(arr,n)<<endl;
  return 0;
}
