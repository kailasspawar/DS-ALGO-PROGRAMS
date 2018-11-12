#include<iostream>
#include<string.h>
using namespace std;

int LCS(char *s1,char *s2,int m,int n)
{
     if(m==0 || n==0)
      return 0;

     if(s1[m-1] == s2[n-1])
       return 1+ LCS(s1,s2,m-1,n-1);

     if(s1[m-1]!=s2[n-1])
       return max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
}

int main()
{
 char *s1 = (char *)"AGGTAB";
   char *s2 = (char*)"GXTXAYB";
  int m = strlen(s1);
   int n = strlen(s2);

  cout<<LCS(s1,s2,m-1,n-1)<<endl;
 return 0;
}
