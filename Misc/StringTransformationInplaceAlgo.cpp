#include<iostream>
using namespace std;

void inplace(string str)
{
  int len = str.length();
   char str1[len+1];
  int i,j=0;
  for( i = 0;i<len;i+=2)
    str1[j++] = str[i];
   
  for( i = 1;i<len;i+=2)
    str1[j++] = str[i];
  str1[j]='\0'; 
  cout<<str1<<endl; 
}
int main()
{
  string str = "a1b2c3d4e5f6g7h8i9j1k2l3m4";
   inplace(str);
 return 0;
}

  
