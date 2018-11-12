#include<bits/stdc++.h>
#define n 5
using namespace std;

int maxWeight(int mat[n][n],int N)
{
  int dp[n][n];
 
  memset(dp,0,sizeof(dp));
  dp[0][0] = mat[0][0];

  for(int i = 1;i<n;i++)
   dp[i][0] = mat[i][0]+dp[i-1][0];

  for(int i = 1;i<n;i++)
   for(int j = 1;j<i+1&&j<n;j++)
    dp[i][j] = mat[i][j]+ max(dp[i-1][j],dp[i-1][j-1]);

 int res = 0;
  for(int i = 0;i<n;i++)
   if(res < dp[n-1][i])
    res = dp[n-1][i];

  return res;
}

int main()
{
  int mat[n][n] = { {4,1,5,6,1},
  		    {2,9,2,11,10},
		    {15,1,3,15,2},
		    {16,92,41,4,3},
		    {8,142,6,4,8}};
 cout<<maxWeight(mat,0)<<endl;
 return 0;
}

