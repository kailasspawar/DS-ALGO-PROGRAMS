#include<iostream>
using namespace std;

int lcs(string a,string b)
{
  int n = a.length();
    int m = b.length();
  string str="";
  int L[n+1][m+1] ;
  for(int i = 0;i<=n;i++)
  {
    for(int j = 0;j<=m;j++)
    {
      if(i==0 || j==0)
           L[i][j] = 0;
      else if(a[i-1]==b[j-1])
      {
       L[i][j] = L[i-1][j-1] + 1;
         if(str.find(a[i-1])==string::npos)
	   str.push_back(a[i-1]);
     }
      else
       L[i][j] = max(L[i-1][j],L[i][j-1]);
    }
  }
 for(int i = 0;i<=n;i++){
  for(int j = 0;j<=m;j++)
   cout<<L[i][j]<<" ";
 cout<<endl;
}
 return L[n][m];
}

int main()
{
  string X = "AGTGATG";
      string Y = "GTTAG";
  cout<<lcs(X,Y)<<endl;

 return 0;
}
