/*
 Given two numbers n and k where n represents number of elements in a set, find number of ways to partition the set into k subsets.

Example:

Input: n = 3, k = 2
Output: 3
Explanation: Let the set be {1, 2, 3}, we can partition
             it into 2 subsets in following ways
             {{1,2}, {3}},  {{1}, {2,3}},  {{1,3}, {2}}  

*/

#include<iostream>
#include<string.h>
using namespace std;

int countP(int n,int k)
{
  int dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
  for(int i = 1;i<=n ;i++)
   for(int j = 0;j<=i;j++)
     if(j == 1 || i==j)
      dp[i][j] = 1;
     else
      dp[i][j] = j * dp[i-1][j] + dp[i-1][j-1];

  return dp[n][k];
}

int main()
{
  cout<<"Count is "<<countP(5,2)<<endl;
  return 0;
}
