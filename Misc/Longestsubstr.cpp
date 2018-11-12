#include<iostream>
using namespace std;

int lcs(string s1,string s2)
{
  int maxlen = 0;
  int n = s1.length();
    int m = s2.length();
  int Lcs[n+1][n+1],res = 0;
  for(int i = 0;i<=n;i++)
  {
   for(int j = 0;j<=m;j++)
   {
    if(i == 0 || j==0)
     Lcs[i][j] = 0;
    else
    if(s1[i-1]==s2[j-1])
    {
     Lcs[i][j] = Lcs[i-1][j-1] + 1;
     res = max(res,Lcs[i][j]);
    }
   else
    Lcs[i][j] = 0;
  }
}
return res;
}

int main()
{
  string s1 = "cheeksforgeeks";
     string s2 = "geeksquiz";
  cout<<lcs(s1,s2)<<endl;
 return 0;
}

