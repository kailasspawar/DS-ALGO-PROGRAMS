#include<iostream>
using namespace std;
const int  Max = 256;

bool kanagram(string a,string b,int k)
{
 int count[Max] = {0};
 int i;
 for(i = 0;i<a.size();i++)
 {
  count[a[i]]++;
  count[b[i]]--;
 }
 if(a[i] || b[i])
  return false;
 int cnt = 0;
 for(i = 0;i<Max;i++)
  if(count[i])
   cnt++;
 
 return (cnt<=k);
}
int main()
{
  string str = "silent";
   string str1 = "listek";
  if(kanagram(str,str1,3))
   cout<<"Strings are Kanagrams\n";
  else
   cout<<"Strings are NOT Kanagrams\n";
 return 0;
}
  
