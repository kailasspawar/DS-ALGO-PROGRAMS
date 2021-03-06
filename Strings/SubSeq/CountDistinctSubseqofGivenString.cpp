#include<iostream>
#define Mx 256
#include<vector>
using namespace std;

int countSubstr(string str)
{
  int n = str.length();
  vector<int>last(Mx,-1);
  int dp[n+1];
  dp[0] = 1;

  for(int i = 1;i<=n;i++)
  {
   dp[i] = 2*dp[i-1];

   if(last[str[i-1]]!=-1)
    dp[i] = dp[i] - dp[last[str[i-1]]];
    
   last[str[i-1]] = (i-1);
  }
   return dp[n];
}

int main()
{
 string str = "gfg";
 cout<<countSubstr(str)<<endl;

 return 0;
}
