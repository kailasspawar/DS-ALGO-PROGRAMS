#include<iostream>
#include<climits>
#define r 3
#define c 3
using namespace std;

//recursive solution
int mini(int a,int b,int z)
{
 return min(min(a,b),z);
}

int minCost(int cost[r][c],int m,int n)
{
  if(n < 0 || m < 0)
   return INT_MAX;

  else if(m==0 && n==0)
   return cost[m][n];
  else
   return cost[m][n] + mini (minCost(cost,m-1,n-1),
                             minCost(cost,m-1,n),
			     minCost(cost,m,n-1));
}

int main()
{
  int mat[r][c] = { {1,2,3},
                    {4,8,2},
		    {1,5,3}};
   cout<<minCost(mat,2,2)<<endl;
  return 0;
}
