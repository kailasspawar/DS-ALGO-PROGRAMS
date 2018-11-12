#include<iostream>
#include<algorithm>
using namespace std;

bool check(int arr[],int n)
{
  int arr1[n];

  copy(arr,arr+n,arr1);

  sort(arr1,arr1+n);
  int i,j;
  for(i = 0;i<n;i++)
   if(arr[i]!=arr1[i])
    break;

  if(i==n)
    return true;
  for(j = n-1;j>=0;j--)
   if(arr[j]!=arr1[j])
    break;
  i++;
  while(i < j)
  {
   if(arr[i] > arr[i-1])
    return false;
    i++;
  }
 if(i >= j)
   return true;
}
 
int main()
{
  int arr[] = {1,2,3,4,20,17,16,15,14};
   int n = sizeof(arr)/sizeof(arr[0]);

 (check(arr,n)) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
 
