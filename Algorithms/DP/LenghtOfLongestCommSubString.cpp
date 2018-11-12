#include<iostream>
using namespace std;

int LonLengthLSubstr(string X,string Y,int m,int n)
{
  int Lsuff[m+1][n+1];
 int res = 0;
  for(int i = 0;i<=m;i++)
  {
    for(int j = 0;j<=n;j++)
    {
      if( i==0 || j==0)
       Lsuff[i][j] = 0;
      else if(X[i-1]==Y[j-1])
      {
        Lsuff[i][j] = Lsuff[i-1][j-1] + 1;
	res = max(res,Lsuff[i][j]);
      }
      else
       Lsuff[i][j] = 0;
   }
 }
 return res;
}

int main()
{
  string X = "geeksforgeeks";
    string Y = "geeksquiz";
  int m = X.length();
     int n = Y.length();
  cout<<LonLengthLSubstr(X,Y,m,n)<<endl;
 return 0;
}
