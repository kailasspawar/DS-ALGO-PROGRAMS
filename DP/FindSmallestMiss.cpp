#include<iostream>
using namespace std;

int findSmallest(int arr[],int n)
{
  int j  = 0;int size = 0;
  for(int i =0;i<n;i++)
  {
     if(arr[i] <= 0)
     {
      swap(arr[i],arr[j]);
      size++;
      j++;
     }
  }
  size = n-size; 
   cout<<size<<endl;
  for(int i = j;i<n;i++)
   if(abs(arr[i]) - 1 < size && arr[abs(arr[i])-1] > 0)
    arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];

  for(int i = j;i<size;i++)
   if(arr[i] > 0)
    return i+1;
  return size+1;
}

int main()
{
  int arr[] = {1,5,8,-1,0,2,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<findSmallest(arr,n)<<endl;
 return 0;
}

