#include<iostream>
#include<string.h>
using namespace std;
void removeStr(char *str,int n)
{
  int i = -1;
  int j = 0;
  while(j < n)
  {
    if(j < n-1 && str[j] == 'a' && str[j+1] == 'c')
     j+=2;
    else if(str[j]=='b')
     j++;
    else if(i >= 0 && str[i] == 'a' && str[j] == 'c')
    {
     i--;
     j++;
    }
    else
     str[++i] = str[j++];
  }
  str[++i] = '\0';
 cout<<str<<endl;
}
void removeSS(string str)
{
  int n = str.length();
  int k = -1;
  int i = 0;
  while( i < n)
  {
    if(i < n-1 && str[i]=='a' && str[i+1]=='c')
    {
     str[i] = '\0';
       str[i+1] = '\0';
       k = i-1;
       i+=2;
    }
    else if(str[i] == 'b')
    {
     str[i] = '\0';
     k = i-1;
     i++;
    }
    else if(k >= 0 && str[k] == 'a'&&str[i]=='c')
    {
     str[k] = '\0';
      str[i] = '\0';
     i++;
    }
    else
     i++;
 }
 cout<<str<<endl;
 }
int main()
{
  char str[] = "ababaac";
   int n = strlen(str);
  removeStr(str,n);
  string ss = "abcabaac";
    removeSS(ss);
  return 0;
}
