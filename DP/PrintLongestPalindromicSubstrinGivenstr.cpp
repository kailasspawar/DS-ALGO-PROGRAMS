#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string lps(string X,string Y)
{
 int m = X.length();
   int n = Y.length();
 cout<<X<<" "<<Y<<endl;
 int L[m+1][n+1];
 
 for(int i = 0;i<=m;i++)
 {
  for(int j = 0;j<=n;j++)
  {
   if(i == 0 || j == 0)
    L[i][j] = 0;
   else if(X[i-1] == Y[j-1])
    L[i][j] = L[i-1][j-1] + 1;
   else
    L[i][j]= max(L[i-1][j],L[i][j-1]);
   }
 }
 int index = L[m][n];
 cout<<index<<endl;
     string lps(index+1,'\0');
 int i = m,j = n;
 while(i > 0 && j > 0)
 {
   if(X[i-1] == Y[j-1])
   {
     lps[index-1] = X[i-1];
    i--;
    j--;
    index--;
   }
   else if ( L[i-1][j] > L[i][j-1])
    i--;
   else
    j--;
 }
 return lps;
}
string lpss(string str)
{
 string rev = str;
 reverse(rev.begin(),rev.end());
return lps(str,rev);
}
int main()
{
  string str = "geeksforgeeks";
  cout<<"Longest pal substr is "<<lpss(str)<<endl;

  return 0;
}
