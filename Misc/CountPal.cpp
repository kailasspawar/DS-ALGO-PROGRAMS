#include<iostream>
using namespace std;
bool isPal(string str)
{
 int n = str.length();
  for(int i = 0;i<n/2;i++)
    if(str[i]!=str[n-i-1])
     return false;
  return true;
}
int count(string str)
{
  int cnt = 0;
  int n = str.length();
  for(int i = 0;i<n-1;i++)
  {
   for(int j = i+1;j<n;j++)
   {
     if(isPal(str.substr(i,j+1)))
      cnt++;
   }
  }
 return cnt;
}
int main()
{
  string str = "abaab";
  cout<<count(str)<<endl;
 return 0;
}
