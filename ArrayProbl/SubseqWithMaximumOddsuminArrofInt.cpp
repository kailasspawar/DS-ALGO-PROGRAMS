/*
 Input : arr[] = {2, 5, -4, 3, -1};
Output : 9
The subsequence with maximum odd 
sum is 2, 5, 3 and -1.

Input : arr[] = {4, -3, 3, -5}
Output : 7
The subsequence with maximum odd
sum is 4 and 3

Input :  arr[] = {2, 4, 6}
Output : -1
There is no subsequence with odd sum.
*/
#include<bits/stdc++.h>
using namespace std;

int maxOddSeq(int arr[],int n)
{
 int sum = 0;
   bool isOdd = false;
  int m = INT_MAX;
  for(int i = 0;i<n;i++)
  {
    if(arr[i] > 0)
      sum+=arr[i];

    if(arr[i]%2!=0)
    {
      isOdd = true;
      if(m > abs(arr[i]))
        m = abs(arr[i]) ; 
    }
  }
 if(sum%2==0)
   sum-=m;

 return sum;
}

int main()
{
  int arr[] = {2,5,-4,3,-1};
     int n = sizeof(arr)/sizeof(arr[0]);
  cout<<maxOddSeq(arr,n)<<endl;
 return 0;
}
