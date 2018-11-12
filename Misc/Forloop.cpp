#include<iostream>
using namespace std;

bool func(int arr[],int n)
{
  for(int i = 0;i<n;i++)
   return (arr[i]%2) == 0;
}

int main()
{
  int arr[] = {2,2,1,5,7,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
  func(arr,n) ? cout<<"yes\n" : cout<<"no\n";
 return 0;
}
