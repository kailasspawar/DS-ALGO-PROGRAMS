#include<iostream>
#include<string.h>
using namespace std;

int count(int s[],int m,int n)
{
 if(n == 0)
  return 1;
 if(n < 0)
  return 0;
 if(n >= 1 && m <= 0)
  return 0;

 return count(s,m-1,n) + count(s,m,n-s[m-1]);
}

int countDP(int S[],int m,int n)
{
  int table[n+1];
  memset(table,0,sizeof(table));
 table[0] = 1;
 for(int i = 0;i<m;i++)
  for(int j = S[i];j<=n;j++)
   table[j] += table[j-S[i]];

 return table[n];
}

int main()
{
  int S[] = {1,2,3};
    int m = sizeof(S)/sizeof(S[0]);
   int n = 4;
  cout<<countDP(S,m,n)<<endl;
     cout<<count(S,m,n)<<endl;
 return 0;
}
