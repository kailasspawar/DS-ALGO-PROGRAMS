/*
 Input : mat[][] = {{1, 3, 3},
                   {2, 1, 4},
                  {0, 6, 4}};
Output : 12 
{(1,0)->(2,1)->(2,2)}

Input: mat[][] = { {1, 3, 1, 5},
                   {2, 2, 4, 1},
                   {5, 0, 2, 3},
                   {0, 6, 1, 2}};
Output : 16
(2,0) -> (1,1) -> (1,2) -> (0,3) OR
(2,0) -> (3,1) -> (2,2) -> (2,3)

Input : mat[][] = {{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}};
Output : 83
*/

#include<iostream>
#include<string.h>
#define m 4
#define n 4
using namespace std;

int goldMine(int mat[m][n])
{
  int dp[m][n];
  memset(dp,0,sizeof(dp));

  for(int i = 0;i<m;i++)
   dp[i][0]  = mat[i][0];
  for(int i = n-1;i>=0;i--)
  {
   for(int j = 1;j<n;j++)
   {
    if(i == 0)
      dp[i][j] = mat[i][j] + max(dp[i][j-1],dp[i+1][j-1]);
    else if(i== (m-1))
     dp[i][j] = mat[i][j] + max(dp[i][j-1],dp[i-1][j-1]);
    else 
     dp[i][j] = mat[i][j] + max(max(dp[i][j-1],dp[i+1][j-1]),dp[i-1][j-1]);
  }
 }
/*  for(auto &row : dp)
  { 
   for(auto col : row)
    cout<<col<<" ";
   cout<<"\n";
  }*/
 int maxsum = 0;
 for(int i = 0;i<m;i++)
  maxsum = max(maxsum,dp[i][n-1]);

return maxsum;
}

int main()
{
  int mat[m][n] = {{1,3,3},
  		   {2,1,4},
		   {0,6,4}};
//    int mat[m][n] = {{10, 33, 13, 15},
  //                    {22, 21, 4, 1},
//		                        {5, 0, 2, 3},
//					                  {0, 6, 14, 2}};
 cout<<goldMine(mat)<<endl;
 return 0;
}
