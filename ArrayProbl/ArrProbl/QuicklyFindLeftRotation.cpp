#include<iostream>
using namespace std;

void leftRotate(int arr[],int k,int n)
{
  int temp[2*n];

  for(int i = 0;i<n;i++)
   temp[i] = temp[i+n] = arr[i];

   int start = k % n;

   for(int i = start;i<start+n;i++)
    cout<<temp[i]<<" ";
  cout<<endl;
}

int main()
{
 int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  leftRotate(arr,k,n);
  k = 5;
  leftRotate(arr,k,n);
  k = 1;
  leftRotate(arr,k,n);

 return 0;
}
