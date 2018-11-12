#include<iostream>
#include<string.h>
using namespace std;

int countPS(string str)
{
  int n = str.length();

  int dp[n][n] ;
  memset(dp,0,sizeof(dp));
  
  bool P[n][n] ;
  memset(P,false,sizeof(P));

  for(int i = 0;i<n;i++)
   P[i][i] = true;

  for(int i = 0;i<n-1;i++)
  {
    if(str[i]==str[i+1])
    {
      P[i][i+1] = true;
      dp[i][i+1] = 1;
    }
 }

 for(int gap = 2;gap<n;gap++)
 {
   for(int i = 0;i<n-gap;i++)
   {
     int j = gap + i;

     if(str[i] == str[j] && P[i+1][j-1])
      P[i][j] = true;

     if(P[i][j])
      dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1];
     else
      dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
   }
 }

 for(int i = 0;i<n;i++)
 {
   for(int j = 0;j<n;j++)
     cout<<dp[i][j]<<" ";
   cout<<"\n";
 }
return dp[0][n-1];
}

int main()
{
  string str = "abaab";
    cout<<"NO of palindromic substrs \n"<<countPS(str)<<endl;
  return 0;
}
