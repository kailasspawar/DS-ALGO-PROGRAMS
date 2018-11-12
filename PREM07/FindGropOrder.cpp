#include<iostream>
#include<cstring>
using namespace std;
void print(string str)
{
  int n = str.length();
  int i,j;
  char s[50];
  int k = 0;
  for(i=0;i<n;i++)
  {
   // cout<<str[i];
    for(j=i+1;j<n;j++)
    {
      if(str[i]-'a'==str[j]-'a')
      {
      //  cout<<str[j];
	s[k] = str[j];
         k++;
      }
  }
 }
  s[k] = '\0';
  cout<<strlen(s)<<endl;
  cout<<s<<endl;
 }

 int main()
 {
   string str = "geeksforgeeks";
   print(str);
   return 0;
 }

