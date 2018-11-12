#include<iostream>
using namespace std;

int binSearch(int arr[],int low,int high,int x)
{
 if(high >= low)
 {
  int mid = (low + high) / 2 ;
  
  if(mid == 0 || x > arr[mid-1] && arr[mid] == x)
    return mid;
  else if(x > arr[mid])
   return binSearch(arr,(mid+1),high,x);
  else
   return binSearch(arr,low,(mid-1),x);
 }
 return -1;
}

bool isMajority(int arr[],int n,int x)
{
  int i = binSearch(arr,0,n-1,x);
 cout<<i<<endl;
  if(i == -1)
   return false;

  return ((i+n/2) < n-1 && arr[i+n/2] == x);
}

int main()
{
  int arr[] = {1,2,2,3,3,3,3,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
  isMajority(arr,n,x) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
