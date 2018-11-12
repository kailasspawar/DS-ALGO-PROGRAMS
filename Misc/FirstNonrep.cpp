#include<iostream>
#define maX 256
using namespace std;

char firstnonRep(string str)
{
  int count[maX] = {0};

  for(int i = 0;i<str.length();i++)
   count[str[i]]++;

  for(int i = 0;i<str.length();i++)
    if(count[str[i]] == 1)
     return str[i];
 return '\0';
}

int  main()
{
 string str = "GeeksforGeeks";
  cout<<firstnonRep(str)<<endl;
 return 0;
}

