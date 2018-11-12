#include<iostream>
using namespace std;
int fact(int n)
{
 int fac[n+1] = {0};
  fac[0] = 1;
  for(int i = 1;i<=n;i++)
   fac[i] = fac[i-1] * i;
 return fac[n];
}
int main(int argc,char **argv)
{
  int a = atoi(argv[1]); 
  cout<<fact(a)<<endl;
return 0;
}
