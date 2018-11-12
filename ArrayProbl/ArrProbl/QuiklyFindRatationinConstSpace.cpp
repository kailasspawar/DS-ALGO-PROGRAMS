#include<iostream>
using namespace std;

void leftRotation(int arr[],int k,int n)
{
  int mod = k % n;

  for(int i = 0;i<n;i++)
   cout<<arr[(mod+i)%n]<<" ";
  cout<<endl;
}

int main()
{
 int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
  leftRotation(arr,3,n);
 return 0;
}
