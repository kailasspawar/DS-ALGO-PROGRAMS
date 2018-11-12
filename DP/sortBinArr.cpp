#include<iostream>
using namespace std;

void segregate(int arr[],int n)
{
 int j = 0;
 for(int i = 0;i<n;i++)
   if(arr[i] == 0)
    swap(arr[i],arr[j++]);
}

int main()
{
  int arr[] = {1,0,1,0,0,1,1,0};
     int n = sizeof(arr)/sizeof(arr[0]);
  segregate(arr,n);
  for(int i : arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
}
