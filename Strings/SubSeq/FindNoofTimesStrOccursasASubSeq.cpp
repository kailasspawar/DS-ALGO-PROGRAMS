#include<iostream>
using namespace std;

/*
 Input:  
string a = "GeeksforGeeks"
string b = "Gks"

Output: 4

Explanation:  
The four strings are - (Check characters marked in bold)
GeeksforGeeks
GeeksforGeeks
GeeksforGeeks
GeeksforGeeks
*/
int countSubseq(string a,string b)
{
 int n = a.length();
   int m = b.length();

  int lookup[n+1][m+1] = {{0}};

  //if first str is empty

  for(int i = 0;i<=m;i++)
   lookup[0][i] = 0;

  //if second string is empty
  for(int i = 0;i<=n;i++)
   lookup[i][0] = 1;

  for(int i = 1;i<=n;i++)
  {
    for(int j = 1;j<=m;j++)
    {
      if(a[i-1]==b[j-1])
       lookup[i][j] = lookup[i-1][j-1] + lookup[i-1][j];

      else
        lookup[i][j] = lookup[i-1][j];
   }
 }
 for(int i = 0;i<=n;i++)
 {
  cout<<"| ";
  for(int j = 0;j<=m;j++)
   {
     cout<<lookup[i][j]<<" ";
   }
  cout<<"|";
  cout<<"\n";
 }
 return lookup[n][m];
}

int main()
{
  string a = "geeksforgeeks";
    string b = "gks";
  cout<<countSubseq(a,b)<<endl;
  return 0;
}
   
