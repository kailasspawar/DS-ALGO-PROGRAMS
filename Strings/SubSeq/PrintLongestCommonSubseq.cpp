#include<iostream>
using namespace std;

void printLcs(string a,string b)
{
  int n = a.length();
    int m = b.length();

 int L[n+1][m+1];

 for(int i = 0;i<=n;i++)
 {
  for(int j = 0;j<=m;j++)
  {
    if(i==0 || j==0)
     L[i][j] = 0;

    else if(a[i-1]==b[j-1])
     L[i][j] = L[i-1][j-1] + 1;
    else
     L[i][j] = max(L[i-1][j],L[i][j-1]);
  }
 }
 cout<<L[n][m]<<endl;
  int index = L[n][m];
  char lcs[index+1];
    lcs[index] = '\0';

  int i = n, j = m;
  while( i > 0 && j > 0)
  {
    if(a[i-1]==b[j-1])
    {
     lcs[index-1] = a[i-1];
     i--;j--;index--;
    }
    else if(L[i-1][j] > L[i][j-1])
     i--;
    else
     j--;
  }
 cout<<"The Lcs of X and Y is "<<lcs<<endl;
}

 int main()
 {
   string a = "AGGTAB";
     string b = "GXTXAYB";
   printLcs(a,b);
  return 0;
 }
