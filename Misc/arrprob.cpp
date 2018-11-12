#include<iostream>
using namespace std;

void func(int arr[],int n)
{
  int i;
  for(i = 0;i<n-1;i++)
   if(arr[i] > arr[i+1])
    break;

 cout<<i<<endl;
}
int main()
{
  int arr[] = {4,5,6,7,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
  func(arr,n);
 return 0;
}
