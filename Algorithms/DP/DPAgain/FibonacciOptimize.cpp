#include<iostream>
using namespace std;
int F[100]= {0}; 
int fib(int n)
{
  if(n == 0)
   return 0;

  if(n == 1 || n == 2)
   return (F[n] = 1);
 
  if(F[n])
    return F[n];
  int k = (n & 1) ? (n+1)/2 : n/2;

  F[n] = (n & 1) ? (fib(k)*fib(k) + fib(k-1)*fib(k-1)):
                   (2*fib(k-1) + fib(k))*fib(k);
  return F[n];
}

int main()
{ 
  int n = 10;
  cout<<n<<"th fibonacci no is "<<fib(n)<<endl;
 return 0;
}
