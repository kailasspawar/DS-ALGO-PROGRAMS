/*
Input: X = "AGGTAB",  Y = "GXTXAYB"
Output: "AGXGTXAYB" OR "AGGXTXAYB" 
OR Any string that represents shortest
supersequence of X and Y

Input: X = "HELLO",  Y = "GEEK"
Output: "GEHEKLLO" OR "GHEEKLLO"
OR Any string that represents shortest 
supersequence of X and Y
*/
#include<iostream>
#include<algorithm>
using namespace std;
string printSSS(string X,string Y)
{
  int m = X.length();
     int n = Y.length();

  int L[m+1][n+1];

  for(int i =0;i<=m;i++)
  {
    for(int j = 0;j<=n;j++)
    {
     if(i==0)
      L[i][j] = j;
     else if(j==0)
      L[i][j] = i;
     else if(X[i-1]==Y[j-1])
      L[i][j] = L[i-1][j-1] + 1;
     else
      L[i][j] = 1+ min(L[i-1][j],L[i][j-1]);
    }
  }
     int  index = L[m][n];
  string str;
   int i = m,j = n;
   while(i > 0 && j> 0)
   {
     if(X[i-1]==Y[j-1])
     {
       str.push_back(X[i-1]);
       i--,j--,index--;
     }
     else if(L[i-1][j] > L[i][j-1])
     {
       str.push_back(Y[j-1]);
       j--,index--;
     }
     else 
     {
       str.push_back(X[i-1]);
       i--,index--;
     }
   }

   while(i > 0)
   {
     str.push_back(X[i-1]);
     i--,index--;
   }
   while(j > 0)
   {
     str.push_back(Y[j-1]);
     j--,index--;
   }
        reverse(str.begin(),str.end());
   return str;
 }

 int main()
 {
  string X = "AGGTAB";
      string Y = "GXTXAYB";
    cout<<printSSS(X,Y)<<endl;
  return 0;
 }


       


