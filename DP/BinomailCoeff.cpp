#include<iostream>
using namespace std;
//following is the recursive approach to find binomial coeff
int binomail(int n,int k)
{ 
  if(k==0 || k==n)
   return 1;
  
  return binomail(n-1,k-1) + binomail(n-1,k);
}
//here the subproblems are solve again and again so we solve it by using dp

int binomailDP(int n,int k)
{
 int C[n+1][k+1];

 for(int i = 0;i<=n;i++)
 {
  for(int j = 0;j<=min(i,k);j++)
  {
    if(j==0 || j==i)
     C[i][j] = 1;
    else
     C[i][j] = C[i-1][j-1] + C[i-1][j];
  }
 }
 for(auto &row : C)
 {
  for(auto i : row)
   cout<<i<<" ";
  cout<<endl;
 }
return C[n][k];
}

int main()
{
 int n = 5 , k = 2;
 cout<<"binomial coeff rec "<<binomail(n,k)<<endl;
    cout<<"binomail coeff dp "<<binomailDP(n,k)<<endl;
  return 0;
}


