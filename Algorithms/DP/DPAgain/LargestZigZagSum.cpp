#include<iostream>
#include<string.h>
#define Max 100
using namespace std;

  int dp[Max][Max] ;
int largestZigZagUtil(int mat[][Max],int i,int j,int n)
{
  if(dp[i][j] != -1)
   return dp[i][j];

  if(i==n-1)
   return (dp[i][j] = mat[i][j]);

  int zzs = 0;
  for(int k = 0;k<n;k++)
   if(k!=j)
    zzs = max(zzs,largestZigZagUtil(mat,i+1,k,n));
 return (dp[i][j] = (zzs+mat[i][j]));
}
 
int largestZigZag(int mat[][Max],int n)
{
  memset(dp,-1,sizeof(dp));

  int res = 0;
  for(int i = 0;i<n;i++)
   res = max(res,largestZigZagUtil(mat,0,i,n));

 return res;
}

int main()
{  
 int n = 3;
  int mat[][Max] = {{4,2,1},
                    {3,9,6},
		    {11,3,15}};
  cout<<largestZigZag(mat,n)<<endl;
 return 0;
}
