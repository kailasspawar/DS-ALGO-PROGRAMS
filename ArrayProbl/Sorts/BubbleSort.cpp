#include<iostream>
using namespace std;

void sortArr(int arr[],int n)
{
 for(int i = 1;i<n;i++)
 {
  for(int j = 0;j<n-i;j++)
  {
    if(arr[j] > arr[j+1])
     swap(arr[j],arr[j+1]);
  }
}
}

int main()
{
  int arr[] = {2,5,7,1,3,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
  sortArr(arr,n);

  for(int &x:arr)
   cout<<x<<" ";
  cout<<endl;
 return 0;
}
