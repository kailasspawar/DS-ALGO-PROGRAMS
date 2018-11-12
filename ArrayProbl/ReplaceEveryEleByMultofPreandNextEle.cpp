#include<iostream>
using namespace std;
/*
  arr[] = {2,3,4,5,6}
  o/p=> {6,8,15,24,30}
*/
int rearrange(int arr[],int n)
{
 int prev = arr[0];
    arr[0] = arr[0]*arr[1];
 for(int i = 1;i<n-1;i++)
 {
  int k = arr[i] ;
  arr[i] = prev * arr[i+1];
  prev = k;
 }
 arr[n-1] = prev*arr[n-1];
}

int main()
{
 int arr[] = {2,3,4,5,6};
   int n = sizeof(arr)/sizeof(arr[0]);
  rearrange(arr,n);
 for(int &x:arr)
  cout<<x<<" ";
 cout<<endl;
return 0;
}
