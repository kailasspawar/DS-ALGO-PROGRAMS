#include<iostream>
#include<cstring>
using namespace std;
char check(string k,string s)
{
  int i;
  int p = k.size();
  if(k[p-1]==s[0])
   return s[p-1];
  else
   return 'N';
}

int main()
{
  string s[] = {"for","geek","rig","kaf"};
  int i,j;
  int len = sizeof(s)/sizeof(s[0]);
  string str;int k = 0;
//  str[0] = s[0][0];
  for(i=0;i<len;i++)
  {
   for(j=0;i<len;j++)
   {
     cout<< check(s[i],s[j])<<endl;
     if(check(s[i],s[j])!='N')
     {
       char p = check(s[i],s[j]);
       str[k] = p;
       cout<<p<<endl;
       k++;
       break;
     }
    
   }
  }
// cout<<str<<endl;
  return 0;
}
