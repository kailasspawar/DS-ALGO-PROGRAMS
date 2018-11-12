/*
 Input : 1
        1 2
        4 1 2
        2 3 1 1        
Output : 9
Explanation : 1 + 1 + 4 + 3

Input : 2
        4 1
        1 2 7
Output : 10
Explanation : 2 + 1 + 7
*/

#include<iostream>
#define n 4
using namespace std;

int maxSumPath(int sum[n][n])
{
  for(int i = 1;i<n;i++)
  {
   for(int j = 0;j<n;j++)
   {
    if(j==0)
     sum[i][j] += sum[i-1][j];
    else
     sum[i][j] += max(sum[i-1][j-1],sum[i-1][j]);
   }
 }
 int maxsum = 0;
 for(int i = 0;i<n;i++)
  maxsum = max(maxsum,sum[n-1][i]);

 return maxsum;
}

int main()
{
    int mat[n][n] = {{1,0,0,0},
  		     {1,2,0,0},
		     {4,1,2,0},
		     {2,3,1,1}};
   cout<<maxSumPath(mat)<<endl;
  return 0;
}
