#include<iostream>
using namespace std;

int countWays(int n)
{
  int fib[n+1];
  fib[0] = 1,fib[1] = 1;
  for(int i = 2;i<=n;i++)
   fib[i] = fib[i-1] + fib[i-2];

  return fib[n];
}

int main()
{
  int n = 4;
 cout<<countWays(n)<<endl;
return 0;
}
