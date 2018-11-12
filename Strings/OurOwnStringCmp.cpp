#include<iostream>
using namespace std;

int strcmp(char *s,char *p)
{
 int i;
 for(i = 0;s[i]&&p[i];++i)
 {
  if(s[i]==p[i]||(s[i]^32)==p[i])
   continue;
  else 
   break;
 }
 if(s[i]==p[i])
  return 0;
 
 if((s[i]|32) < (p[i]|32))
  return -1;
 return 1;
}

int main()
{
 char str[] = "prem";
   char ss[] = "prem";
  cout<<strcmp(str,ss)<<endl;
 return 0;
}
