#include<iostream>
#include<string.h>
using namespace std;

int lps(string str,int l,int h)
{
  if(l == h)
    return 1;
  if(str[l] == str[h] && l+1 == h)
   return 2;
  if(str[l] == str[h])
   return lps(str,l+1,h-1) + 2;
 return max(lps(str,l+1,h),lps(str,l,h-1));
}

int lpsDP(string str,int n)
{
  int L[n][n];
 memset(L,0,sizeof(L)); 
  for(int i = 0;i<n;i++)
   L[i][i] = 1;

  for(int i = 2;i<=n;i++)
  {
   for(int j = 0;j<n-i+1;j++)
   {
     int k = j+i-1;
     if(str[j] == str[k] && i==2)
      L[j][k] = 2;
     else if(str[j] == str[k])
      L[j][k] = L[j+1][k-1]+ 2;
     else
      L[j][k] = max(L[j][k-1],L[j+1][k]);
   }
 }
 for(auto &row : L)
 {
  for(auto i : row)
   cout<<i<<" ";
  cout<<endl;
 }
return L[0][n-1];
}

int main()
{
  string str = "geeksforgeeks";
    int n = str.length();
  cout<<"Lenght of longest palin substr is "<<lps(str,0,n-1)<<endl;
  cout<<"Lenght of longest palin substr is "<<lpsDP(str,n)<<endl;
 return 0;
}
 

