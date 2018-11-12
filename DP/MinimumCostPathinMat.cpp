#include<iostream>
#define R 3
#define C 3
using namespace std;

int minCostPath(int cost[R][C])
{
 int dp[R][C];
 dp[0][0] = cost[0][0];
  for(int i = 1;i<C;i++)
   dp[0][i] = dp[0][i-1] + cost[0][i];

  for(int j = 1;j<R;j++)
   dp[j][0] = dp[j-1][0] + cost[j][0];

  for(int i = 1;i<R;i++)
   for(int j = 1;j<C;j++)
    dp[i][j] = cost[i][j] + min(dp[i-1][j],
                   min(dp[i][j-1],dp[i-1][j-1]));

   return dp[R-1][C-1];
}

int main()
{
  int cost[R][C] = {{1,2,3},
                    {4,8,2},
		    {1,5,3}};
  cout<<"min cost Path "<<minCostPath(cost)<<endl;
 return 0;
}
