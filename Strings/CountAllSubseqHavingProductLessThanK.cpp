/*
Input : [1, 2, 3, 4] 
        k = 10
Output :11 
The subsequences are {1}, {2}, {3}, {4}, 
{1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4}, 
{1, 2, 3}, {1, 2, 4}

Input  : [4, 8, 7, 2] 
         k = 50
Output : 9
*/
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int ProdSubseqCount(vector<int>arr,int k)
{
  int n = arr.size();
  int dp[k+1][n+1];
  memset(dp,0,sizeof(dp));

  for(int i = 1;i<=k;i++)
  {
   for(int j = 1;j<=n;j++)
   {
     dp[i][j]= dp[i][j-1];

     if(arr[j-1] <= i && arr[j-1] > 0)
       dp[i][j]+=dp[i/arr[j-1]][j-1] + 1;
   }
 }
 dp[k][n] ;
}
int main()
{
  vector<int>v ;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  int k = 10;
  cout<<ProdSubseqCount(v,k)<<endl;
 return 0;
}
