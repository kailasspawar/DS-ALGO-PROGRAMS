#include<iostream>
using namespace std;

void ThreeWayPartitioning(int arr[],int n,int lowVal,int highVal)
{ 
  int end = n-1,start = 0;

  for(int i = start;i<=end;)
  {
    if(arr[i] < lowVal)
     swap(arr[i++],arr[start++]);
    else if(arr[i] > highVal)
     swap(arr[i],arr[end--]);
    else
     i++;
  }
}

int main()
{
  int arr[] =  {1, 14, 5, 20, 4, 2, 54, 20, 87,98, 3, 1, 32};
    int n = sizeof(arr)/sizeof(arr[0]);
  ThreeWayPartitioning(arr,n,14,20);
  for(int i : arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
 }
