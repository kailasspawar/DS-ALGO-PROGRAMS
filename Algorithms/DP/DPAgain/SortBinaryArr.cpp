#include<iostream>
using namespace std;

void sortArr(int arr[],int n)
{
  int i = 0;
  int j  = -1;
 
  while(i < n)
  {
    if(arr[i] == 0)
      swap(arr[i],arr[++j]);
   i++;
  }
 
}

int main()
{
  int arr[] = {1,1,1,0,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
   sortArr(arr,n);
  for(int &i : arr)
   cout<<i<<" ";
  cout<<endl;
  return 0;
}
