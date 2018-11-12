#include<iostream>
#include<algorithm>
using namespace std;

void sortarr(int arr[],int n)
{
  sort(arr,arr+n);
  
  for(int i=0 ; i<n-1 ;i+=2)
   swap(arr[i],arr[i+1]);

 for(int i =0 ; i<n ; i++)
  cout<<arr[i]<<" ";
 cout<<endl;
}

// Sort in O(n) time .............//
void sortArr(int arr[],int n)
{
  for(int i=0;i<n;i+=2)
  {
    if(i > 0&&arr[i-1] > arr[i])
     swap(arr[i],arr[i-1]);

    if(i < n-1&&arr[i] < arr[i+1])
      swap(arr[i],arr[i+1]);
  }
 for(int i =0 ; i<n ; i++)
  cout<<arr[i]<<" ";
 cout<<endl;
}

int main()
{
  int arr[] = {10, 90, 49, 2, 1, 5, 23};
 // int arr[] = {2,5,1,3,7,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
//  sortarr(arr,n);
  sortArr(arr,n);
 return 0;
}

