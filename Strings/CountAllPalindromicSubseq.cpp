#include<iostream>
using namespace std;

int countPalin(string str,int n)
{
  int count[n+1][n+1] = {0};

  for(int i = 0;i<n;i++)
   count[i][i] = 1;

  for(int L = 2;L<=n;L++)
  {
    for(int i = 0;i<n;i++)
    {
      int k = L+i-1;
     if (str[k]==str[i])
      count[i][k] = count[i][k-1] + count[i+1][k] + 1;
     else
      count[i][k] = count[i][k-1]+count[i+1][k] - count[i+1][k-1];
    }
   }
  return count[0][n-1];
 }

 int main()
 {
  string str = "abcb";
    int n = str.length();
   cout<<countPalin(str,n)<<endl;
  return 0;
}
