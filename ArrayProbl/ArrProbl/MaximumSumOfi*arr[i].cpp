#include<iostream>
using namespace std;

int maxsum(int arr[],int n)
{
  int arrSum = 0;
    int currSum = 0;

  for(int i = 0;i<n;i++)
  {
   arrSum+=arr[i];
      currSum+=(i*arr[i]);
  }
  int maxSum = 0;
  for(int j = 1;j<n;j++)
  {
    currSum += arrSum-n*arr[n-j];
    if(maxSum < currSum)
      maxSum = currSum;
  }
 return maxSum;
}

int main()
{
  int arr[] = {10,1,2,3,4,5,6,7,8,9};
     int n = sizeof(arr)/sizeof(arr[0]);
  cout<<maxsum(arr,n)<<endl;
 return 0;
}
