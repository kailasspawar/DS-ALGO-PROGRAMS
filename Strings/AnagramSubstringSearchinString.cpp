#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

bool isAnagram(string s1,string s2)
{
  sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());

   return (s1==s2);
}
void checkAnagram(string str,string pat)
{
  int len = pat.length();
  for(int i = 0;i<str.length();i++)
  {
     if(isAnagram(str.substr(i,len),pat))
       cout<<i<<endl;
  }
}

int main()
{
  string str = "BACDGABCDA";
    string pat = "ABCD";
  checkAnagram(str,pat);
 return 0;
}
