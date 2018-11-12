#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int maxRepSubseq(string str)
{
  int n = str.length();

  int dp[n+1][n+1];
  memset(dp,0,sizeof(dp));

  for(int i = 1;i<=n;i++)
  {
    for(int j = 1;j<=n;j++)
    {
      if(str[i-1] == str[j-1] && i!=j)
       dp[i][j] = 1 + dp[i-1][j-1];
      else
       dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
    }
 }

 int i = n,j = n;
 string sub = "";
 while(i > 0 && j > 0)
 {
   if(dp[i][j] == dp[i-1][j-1] + 1)
   {
    sub = sub + str[i-1];
    i--;
    j--;
   }
   else if(dp[i][j] == dp[i-1][j])
    i--;
   else 
    j--;
 }
 reverse(sub.begin(),sub.end());
 cout<<"Subseq is "<<sub<<endl;

return dp[n][n];
}

int main()
{
  string str = "AABEBCDD";
  cout<<maxRepSubseq(str)<<endl;
 return 0;
}
