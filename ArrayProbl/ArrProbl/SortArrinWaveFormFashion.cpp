#include<iostream>
using namespace std;

void sortinWave(int arr[],int n)
{
  for(int i = 0;i<n;i+=2)
  {
    if(i > 0 && arr[i-1] > arr[i])
      swap(arr[i-1],arr[i]);

    if(i < n-1 && arr[i] < arr[i+1])
     swap(arr[i],arr[i+1]);
   }
}

int main()
{
 int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
 sortinWave(arr,n);
 for(int i:arr)
  cout<<i<<" ";
 cout<<endl;
return 0;
}
