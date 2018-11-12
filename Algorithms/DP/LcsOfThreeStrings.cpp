#include<iostream>
using namespace std;
int lcs(string X,string Y,string Z)
{
  int m = X.length();
     int n = Y.length();
        int o = Z.length();
  int lcs[m+1][n+1][o+1];
   for(int i = 0;i<=m;i++)
   {
    for(int j = 0;j<=n;j++)
     {
       for(int k = 0;k<=o;k++)
       {
         if(i==0 || j==0 || k==0)
	  lcs[i][j][k] = 0;
	 else if(X[i-1] == Y[j-1] && X[i-1] == Z[k-1])
	  lcs[i][j][k] = lcs[i-1][j-1][k-1] + 1;
	 else
	  lcs[i][j][k] = max(lcs[i-1][j][k],max(lcs[i][j-1][k],lcs[i][j][k-1]));
       }
     }
  }

 return lcs[m][n][o];
}

int main()
{
  string X = "geeks";
     string Y = "geeksfor";
       string Z = "geeksforgeeks";
   cout<<lcs(X,Y,Z)<<endl;
  return 0;
}
