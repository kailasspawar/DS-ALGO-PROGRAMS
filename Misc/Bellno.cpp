#include<iostream>
#include<string.h>
using namespace std;

void bellno(int n)
{
  int dp[n+1][n+1] ;
  memset(dp,0,sizeof(dp));
  dp[0][0] = 1;

  for(int i = 1;i<=n;i++)
  {
   for(int j = 0;j<=n;j++)
   {
    if(j == 0)
      dp[i][j] = dp[i-1][i-1];
    if(dp[i-1][j-1] > 0)
     dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
    }
  }
  for(int i = 0;i<n;i++)
  {
   for(int j = 0;j<n;j++)
   {
    if(dp[i][j] > 0)
     cout<<dp[i][j]<<" ";
   }
   cout<<endl;
 }
cout<<dp[n-1][n-1]<<endl;

}

int main()
{
  int n = 5;
  bellno(n);
 return 0;
}
