#include<iostream>
using namespace std;

int findWater(int arr[],int n)
{
  int left_max = 0,right_max = 0;
  int low = 0,high = n-1;
   int result = 0;
  while(low <= high)
  {
    if(arr[low] < arr[high])
    {
      if(arr[low] > left_max)
       left_max = arr[low];
      else
       result+=left_max - arr[low];
     low++;
    }
    else
    {
      if(arr[high] > right_max)
       right_max = arr[high];
      else
       result+=right_max - arr[high];
      high--;
    }
  }
  return result;
}

int main()
{
 int arr[] = {5,3,7,2,6,4,5,9,1,2};
     int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"Total water accumulated is : "<<findWater(arr,n)<<endl;
  return 0;
}
