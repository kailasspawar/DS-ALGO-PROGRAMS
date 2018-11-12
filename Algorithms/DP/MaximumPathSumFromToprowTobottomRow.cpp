/*
  (i+1, j)
(i+1, j-1)
(i+1, j+1)
Starting from any column in row 0, return the largest sum of any of the paths up to row N-1.

Examples:

Input : mat[4][4] = { {4, 2, 3, 4},
                      {2, 9, 1, 10},
                      {15, 1, 3, 0},
                      {16, 92, 41, 44} };
Output :120
path : 4 + 9 + 15 + 92 = 120 
*/
#include<iostream>
#include<string.h>
#define n 4
using namespace std;

int maxSumPath(int mat[n][n])
{
  int dp[n+1][n+1];
  memset(dp,0,sizeof(dp));
  
  for(int i = 0;i<n;i++)
   dp[0][i] = mat[0][i];

  for(int i = 1;i<n;i++)
  {
    for(int j = 0;j<n;j++)
    {
      if(j == 0)
       dp[i][j] = mat[i][j] + max(dp[i-1][j],dp[i-1][j+1]);
      else
       dp[i][j] = mat[i][j] + max(max(dp[i-1][j],dp[i-1][j+1]),dp[i-1][j-1]);
    }
  }
  int maxsum = 0;
  for(int i = 0;i<n;i++)
    if(maxsum < dp[n-1][i])
     maxsum = dp[n-1][i];

 for( auto &row : dp)
 {
      for( auto col : row)
                cout << col <<" "; 
      cout<<endl;
 }
 return maxsum;
}

int main()
{
  int mat[n][n] = {{4,2,3,4},
  		   {2,9,1,10},
		   {15,1,3,0},
		   {16,92,41,44}};
  cout<<"Maximum path sum: "<<maxSumPath(mat)<<endl;
 return 0;
}

