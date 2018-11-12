#include<iostream>
using namespace std;

int lcs(string a,string b,int m,int n)
{
  if(n==0 || m==0)
   return 0;

  if(a[m-1] == b[n-1])
   return 1 + lcs(a,b,m-1,n-1);
 
 return max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
}

int lcsDP(string s1,string s2,int m,int n)
{ 
  int dp[m+1][n+1];
  for(int i = 0;i<=m;i++)
  {
   for(int j = 0;j<=n;j++)
   {
    if(i == 0 || j== 0)
     dp[i][j] = 0;
    else if(s1[i-1] == s2[j-1])
     dp[i][j] = dp[i-1][j-1] + 1;
    else
     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
   }
  }
 return dp[m][n];
}
int main()
{
  string a = "ABCDGH";
     string b = "AsCqGeH";
   int m = a.length();
      int n = b.length();
   cout<<"lcs length is "<<lcs(a,b,m,n)<<endl;
   cout<<"lcs length is "<<lcsDP(a,b,m,n)<<endl;
  return 0;
}
