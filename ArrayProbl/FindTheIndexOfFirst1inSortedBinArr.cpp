#include<iostream>
using namespace std;

int findIndex(int arr[],int low , int high)
{
  while(low <= high)
  {
    int mid = low+(high-low)/2;

    if(arr[mid]==1 && (mid == 0 || arr[mid-1] == 0))
      return mid;
    else if(arr[mid] == 1)
      high = mid-1;
    else
      low = mid+1;
  }
 return -1;
}

int main()
{
  int arr[] = {0,0,0,0,0,0,1,1,1,1};
     int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"The index of first 1 is "<<findIndex(arr,0,n-1)<<endl;

  return 0;
}
