/*
Input  : W = 5, cost[] = {20, 10, 4, 50, 100}
Output : 14
We can choose two oranges to minimize cost. First 
orange of 2Kg and cost 10. Second orange of 3Kg
and cost 4. 

Input  : W = 5, cost[] = {1, 10, 4, 50, 100}
Output : 5
We can choose five oranges of weight 1 kg.

Input  : W = 5, cost[] = {1, 2, 3, 4, 5}
Output : 5
Costs of 1, 2, 3, 4 and 5 kg packets are 1, 2, 3, 
4 and 5 Rs respectively. 
We choose packet of 5kg having cost 5 for minimum
cost to get 5Kg oranges.
*/
#include<iostream>
#include<vector>
#define INF 10000
using namespace std;

int minimumCost(int cost[],int n,int W)
{
  int mincost[n+1][W+1];
  int size = 0;
 vector<int>wt,val;
  for(int i = 0;i<n;i++)
  {
    if(cost[i]!=-1)
    {
      val.push_back(cost[i]);
      wt.push_back(i+1);
      size++;
    }
  }
  for(int i = 0;i<=W;i++)
   mincost[0][i] = INF;

  for(int i = 0;i<=n;i++)
   mincost[i][0] = 0;

  for(int i = 1;i<=n;i++)
  {
   for(int j = 1;j<=W;j++)
   {
     if(wt[i-1] > j)
      mincost[i][j] = mincost[i-1][j];

     else
      mincost[i][j] = min(mincost[i-1][j],mincost[i-1][j-wt[i-1]]+val[i-1]);
   }
 }

  return mincost[n][W]==INF ? -1 : mincost[n][W];
}
 
int main()
{
  int cost[] = {1,2,3,4,5};
    int n = sizeof(cost)/sizeof(cost[0]);

  int W = 5;

 cout<<minimumCost(cost,n,W)<<endl;
 return 0;
}


