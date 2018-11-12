/*
 Input: str = "abc"
Output: 0
There is no repeating subsequence

Input: str = "aab"
Output: 1
The two subssequence are 'a'(first) and 'a'(second). 
Note that 'b' cannot be considered as part of subsequence 
as it would be at same index in both.

Input: str = "aabb"
Output: 2

Input: str = "axxxy"
Output: 2
*/
#include<iostream>
#include<string.h>
using namespace std;

int lcsrep(string str)
{
 int n = str.length();
  int dp[n+1][n+1] ;
  memset(dp,0,sizeof(dp));

  for(int i = 1;i<=n;i++)
  {
   for(int j = 1;j<=n;j++)
   {
     if(str[i-1]==str[j-1] && i!=j)
      dp[i][j] = 1 + dp[i-1][j-1];
     else
      dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
   }
  }
 return dp[n][n];
}

 int main() 
 {
   string str = "AABEBCDD";
     cout<<"length of longest rep is\n"<<lcsrep(str)<<endl;
   return 0;
 }

