#include<iostream>
#include<string.h>
using namespace std;

//Binomail coeff can be calculated by the formula 
// n!/k!(n-k)!

//following is the recursive function to calculate binomail coeff

int binomial(int n,int k)
{
  if(k==0 || k==n)
   return 1;

  return binomial(n-1,k-1) + binomial(n-1,k);
}

//so given problem has optimal substructure property as well as 
//overlapping subproblems so this can be solved by using DP

//folloewing is the solution using dynamic progamming bottom up approach

int binomailCoeff(int n,int k)
{
  int C[k+1];
  memset(C,0,sizeof(C));
  C[0] = 1;
  for(int i = 1;i<=n;i++)
  {
    for(int j = min(i,k);j>0;j--)
     C[j] = C[j] + C[j-1];
  }
 return C[k];
}
int main()
{
  int n = 5,k = 2;

 cout<<binomial(n,k)<<endl;
    cout<<binomailCoeff(n,k)<<endl;
 return 0;
}

