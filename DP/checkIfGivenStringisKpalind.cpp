#include<iostream>
#include<algorithm>
using namespace std;

int lpss(string X,string Y,int n,int m)
{
  int dp[n+1][m+1];
  for(int i = 0;i<=n;i++)
  {
   for(int j = 0;j<=n;j++)
   {
     if(i == 0 || j== 0)
      dp[i][j] = 0;
     else if(X[i-1] == Y[j-1])
      dp[i][j] = dp[i-1][j-1] + 1;
     else
      dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
   }
 }
 return dp[n][m];
}

int lps(string str)
{
 string rev = str;
  int n = str.length();
 reverse(rev.begin(),rev.end());
  return lpss(str,rev,n,n);
}

bool kpalindrome(string str,int k)
{
  int lps1 = lps(str);
 return str.length()-lps1 <= k;
}

int main()
{
  string str = "abcdeca";
  int k = 2;
 kpalindrome(str,k) ? cout<<"Yes given string is k palindrome\n":
                    cout<<"No given string is not k palindrome\n";
 return 0;
}
