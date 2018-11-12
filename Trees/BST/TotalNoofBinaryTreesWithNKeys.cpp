#include<iostream>
using namespace std;

unsigned long int binomailCoeff(int n ,int k)
{
  unsigned long int res =1;
  if(k > n-k)
   k = n-k;

  for(int i = 0;i<k;i++)
  {
    res*=(n-i);
    res/=(i+1);
  }
  return res;
}

unsigned long int nthCatalan(int n)
{
  unsigned long int c = binomailCoeff(2*n,n);

  return c/(n+1);
}

int main()
{
  int n = 4;

  cout<<"Total possible bst' s are "<<nthCatalan(n)<<endl;

  return 0;
}
