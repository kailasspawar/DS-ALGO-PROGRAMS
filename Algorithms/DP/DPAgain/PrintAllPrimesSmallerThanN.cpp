#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
  for(int i = 2;i<sqrt(n);i++)
   if(n % i == 0)
    return false;
 return true;
}

void printPrimes(int n)
{
 cout<<"2"<<" ";
  for(int i = 3;i<=n;i+=2)
   if(isPrime(i))
    cout<<i<<" ";
  cout<<endl;
}

int main()
{
  int n = 30;
  printPrimes(n);
 return 0;
}
