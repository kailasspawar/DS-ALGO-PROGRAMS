#include<iostream>
#define Max 26
using namespace std;
bool check(string str)
{
  int count[Max] = {0};
   
  for(int i = 0;i<str.length();i++)
   count[str[i]-'a']++;
  int cnt  = 0;
  for(int i = 0;i<str.length();i++)
  {
   if(cnt  > 1)
    return false;
   if(count[str[i]-'a'] % 2==1)
    cnt++;
  }
 return true;
}
  
int main()
{
  string str = "geeksogeeks";
  check(str) ? cout<<"Yes\n" : cout<<"No\n";

  return 0;
}
