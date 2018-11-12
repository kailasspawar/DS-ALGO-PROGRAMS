#include<iostream>
#include<climits>
using namespace std;

int maxsum(int arr[],int n)
{
  int maxsum = INT_MIN,sum = 0; 

  for(int i = 0;i<n;i++)
  {
    sum+=arr[i];

    if(maxsum < sum)
     maxsum = sum;

    if(sum < 0)
       sum = 0;
   
  }
 return maxsum;
}
//solution to given problem by DP
int maxArrSum(int arr[],int n)
{
  int curr_sum = arr[0];
     int maxsofar = arr[0];
   for(int i = 1;i<n;i++)
   { 
     curr_sum = max(arr[i],curr_sum+arr[i]);
     maxsofar = max(maxsofar,curr_sum);
   }
  return maxsofar;
}

int main()
{
  int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<maxsum(arr,n)<<endl;
      cout<<maxArrSum(arr,n)<<endl;
 return 0;
}
