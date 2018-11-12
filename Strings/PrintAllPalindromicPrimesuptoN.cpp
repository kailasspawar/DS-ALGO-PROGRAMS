/*
Given a number n, print all palindromic primes smaller than or equal to n. For example, If n is 10, the output should be “2, 3, 5, 7′. And if n is 20, the output should be “2, 3, 5, 7, 11′.
*/
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

bool isPrime(int n)
{
  for(int i = 2;i<=sqrt(n);i++)
   if(n%i == 0)
    return false;
 return true;
}
bool isPalPrime(string str)
{
  int n = str.length();
  for(int i = 0;i<n/2;i++)
    if(str[i]!=str[n-i-1])
      return false;
 return true;
}

int printPal(int n)
{
 for(int i = 2;i<=n;i++)
 {
   if(isPrime(i))
   {
      string str = to_string(i);
      if(isPalPrime(str))
        cout<<i<<" ";
   }
  }
 cout<<endl;
}
int main()
{
  int n = 20;
  cout<<isPrime(5)<<endl;
  printPal(n);
  return 0;
}
