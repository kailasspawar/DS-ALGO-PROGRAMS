/*
 Input  : arr[] = {3, 5, 10, 15, 17, 12, 9}, K = 4
 Output : 62
 Then disjoint pairs with difference less than K are,
 (3, 5), (10, 12), (15, 17)	
 So maximum sum which we can get is 3 + 5 + 12 + 10 + 15 + 17 = 62
 Note that an alternate way to form disjoint pairs is,
 (3, 5), (9, 12), (15, 17), but this pairing produces lesser sum.

 Input  : arr[] = {5, 15, 10, 300}, k = 12
 Output : 25
*/
#include<algorithm>
#include<iostream>
using namespace std;
int maxSumSpaceOpt(int arr[],int n,int k)
{
  sort(arr,arr+n);
  int maxsum = 0;
  for(int i = n-1;i>0;i--)
  {
    if(arr[i] - arr[i-1] < k)
    {
      maxsum+=arr[i-1];
      maxsum+=arr[i];
      i--;
    }
  }
 return maxsum;
}
int maxsumDiff(int arr[],int n,int k)
{
  sort(arr,arr+n);

  int dp[n];
     dp[0] = 0;

  for(int i = 1;i<n;i++)
  {
    dp[i]  = dp[i-1];

    if(arr[i] - arr[i-1] < k)
    {
      if(i >= 2)
        dp[i] = max(dp[i],dp[i-2] + arr[i-1] + arr[i]);
      else
        dp[i] = max(dp[i],arr[i-1] + arr[i]);
    }
 }
 return dp[n-1];
}

int main()
{
  int arr[] = {3,5,10,15,17,12,9};
      int n = sizeof(arr)/sizeof(arr[0]);
   int k = 4;
 cout<<"Maxsum is "<<maxSumSpaceOpt(arr,n,k)<<endl;
 cout<<maxsumDiff(arr,n,k)<<endl;
 return 0;
}
