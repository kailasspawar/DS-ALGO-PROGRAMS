#include<iostream>
using namespace std;

int count(int s[],int m,int n)
{
  if(n==0)
    return  1;
  if(n < 0)    return 0;

  if(m <= 0 && n>=1)
   return 0;
 return count(s,m-1,n) + count(s,m,n-s[m-1]);
}

int countDP(int s[] ,int m,int  n)
{
  int table[n+1] = {0};
  table[0] = 1;

  for(int i = 0;i<m;i++)
   for(int j = s[i];j<=n;j++)
    table[j] += table[j-s[i]];

  return table[n];
}

int main()
{
  int s[] = {1,2,3};
    int m = sizeof(s)/sizeof(s[0]);
   int n = 4;
 cout<<"The no of sol "<<count(s,m,n)<<endl;
 cout<<"The no of sol "<<countDP(s,m,n)<<endl;
 return 0;
}















