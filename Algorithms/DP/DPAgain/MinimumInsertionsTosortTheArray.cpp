#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int minInsert(int arr[],int n)
{
  int lis[n] = {1};

  for(int i = 1;i<n;i++)
    for(int j = 0;j<i;j++)
      if(arr[i] > arr[j] && lis[i] < lis[j]+1)
       lis[i] = lis[j] + 1;

   int mx = *max_element(lis,lis+n);
 return (n-mx);
}

int main()
{
  int arr[] = {2,3,5,1,4,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<minInsert(arr,n)<<endl;
 return 0;
}
  
