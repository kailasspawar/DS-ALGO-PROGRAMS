#include<iostream>
#include<algorithm>
using namespace std;

int lis(int arr[],int n)
{
  int *lis = new int[n];
 
 for(int i = 0;i<n;i++)
  lis[i] = 1;

  for(int i= 1;i<n;i++)
   for(int j = 0;j<i;j++)
    if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
     lis[i] = lis[j] + 1;

  int res = *max_element(lis,lis+n+1);
  delete [] lis;
 return res;
}

int main()
{
 int arr[] = {10,22,9,23,21,50,41,60};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"length of longest inc subseq is "<<lis(arr,n)<<endl;
 return 0;
}
