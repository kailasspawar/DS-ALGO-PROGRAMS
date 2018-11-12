#include<iostream>
#include<algorithm>
using namespace std;
string ss;
bool isMem(string str,char c)
{
  for(int i = 0;i<str.size();i++)
   if(str[i]==c)
     return true;
  return false;
}
    
void removeChars(string str2,string str1)
{
  int i;
   int len = str2.size();
   string str = str2;
   for(i = 0;i<len;i++)
   {
     if(isMem(str1,str[i]))
       str[i] = '\0';
  }
     cout<<str<<endl;
}

bool func(char c)
{
 return (ss.find(c)!=string::npos);
}

void remove(string s1,string s2)
{
 // ss = s2;
  remove_if(s1.begin(),s1.end(),func);
  cout<<s1<<endl;
}
int main()
{
  string s1 = "geeksforgeeks";
     string s2 = "mask";
  ss = s1;
  removeChars(s1,s2);
  remove(s1,s2);
  
  return 0;
}
