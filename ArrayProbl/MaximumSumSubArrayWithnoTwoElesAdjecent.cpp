#include<bits/stdc++.h>
using namespace std;
int maxSumsubarray(int arr[],int n)
{
  int maxsum = INT_MIN;
  for(int i = 0; i < n; i++)
  {
   int sum = 0;
   sum+=arr[i];
   for(int j = i+2; j < n; j+=2)
    sum+=arr[j];
  
   if(sum > maxsum)
     maxsum = sum;
   
  }
 return maxsum;
}
//Using Exclusive inclusive in O(n)
int MaxSum(int arr[],int n)
{
 int exc = 0,newexc,incl = arr[0];
 for(int i = 1;i < n;i++)
 {
   newexc = max(incl,exc);
   
   incl = exc+arr[i];
   exc = newexc ; 
 }
 return max(incl,exc);
}
int main()
{
  int arr[] = {5, 5, 10, 100, 10, 5};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<maxSumsubarray(arr,n)<<endl;
  cout<<MaxSum(arr,n)<<endl;
  return 0;
}

