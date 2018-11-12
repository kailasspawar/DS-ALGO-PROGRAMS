#include<iostream>
#include<stdio.h>
using namespace std;
bool match(char *first,char *second)
{
  if(*first== '\0' && *second == '\0')
    return true;

  if(*first == '*' && *(first+1) != '\0' && *second == '\0')
    return false;
 
  if(*first == '?'|| *first==*second)
   return match(first+1,second+1);

  if(*first=='*')
   return match(first+1,second) || match(first,second+1);
  return false;
}

void print(char *s1,char *s2)
{
 match(s1,s2) ? puts("Yes"):puts("No");
}

int main()
{
  print("g*ks","geeks");
     print("g*k","gee");
  return 0;
}
