#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

bool check(char *s1,char *s2)
{
  char *s3 ;
  int len = strlen(s1);
  s3 = (char *)malloc(sizeof(char)*(len*2+1));
  strcat(s3,s1);
   strcat(s3,s1);
  cout<<s3<<endl;  
  if(strstr(s3,s2))
   return true;
 return false;
}

int main()
{
  char *s1 = "ABACD";
    char *s2 = "CDABA";
  if(check(s1,s2))
   cout<<"Yes\n";
  else
   cout<<"No\n";
 return 0;
}
