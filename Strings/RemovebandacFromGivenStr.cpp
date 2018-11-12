#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void remove(char *str)
{
 int len = strlen(str);
  char *str1 =(char *)malloc(sizeof(char)*len+1);
 int j = 0;
  for(int i = 0;i<len;i++)
    if(str[i]!='b')
    {
      str1[j++] = str[i];
         str[i] = '\0';
    }
  int i = 0,k=1;
  while(i < len&&k<len)
  {
    if(str[i]!='a'&&str[k]!='c')
    {
      str1[j++] = str[i];
        i++;   
       k++;
    }
    else if(str[i]=='a'&&str[k]=='c')
    {
      i = k+1;
        k++;
    }
    else
    {
      i++;
      k++;
    }
  }
 str1[j] = '\0';
 cout<<str1<<endl;
}

int main()
{
  char str[] = "ababac";
 char *s = str;
  remove(s);
 return 0;
} 
