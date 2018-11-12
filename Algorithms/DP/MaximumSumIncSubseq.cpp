#include<iostream>
#include<algorithm>
using  namespace std;

int maxSumIS(int arr[],int n)
{
  int msis[n];
  int i,j;
  for(i = 0;i<n;i++)
   msis[i] = arr[i];

  for(i = 1;i<n;i++)
   for(j = 0;j<i;j++)
     if(arr[i] > arr[j] && msis[i] < msis[j] + arr[i])
       msis[i] = msis[j] + arr[i];

  return *max_element(msis,msis+n);
}

int main()
{
  int arr[] = {1,101,2,3,100,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Maximum sum is "<<maxSumIS(arr,n)<<endl;
 return 0;
}
