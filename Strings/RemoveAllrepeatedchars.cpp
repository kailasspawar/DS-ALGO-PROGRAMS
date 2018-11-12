#include<iostream>
#include<stdio.h>
using namespace std;

void removeRep(string str)
{
  int i;
  int len  = str.size();
 int count[256] = {0};
  
  for(i = 0 ;i < len;i++)
    count[str[i]]++;
 
  for(i = 0;i<256;i++)
  {
    if(count[i] > 0)
     cout<<char(i);
    // printf("%c",i);
  }

  cout<<endl;
 }

 int main()
{
  string str = "geeksforgeeks";
   removeRep(str);
 return 0;
}
