#include<iostream>
using namespace std;
char flip(char c)
{
  return (c=='0') ? '1' : '0';
}
string twosComplement(string str,int n)
{
  int i ;
  for(i = n;i>=0;i--)
   if(str[i]=='1')
    break;
   
   if(i < 0)
    return '1'+str;

   for(int k = i-1;k>=0;k--)
    str[k] = flip(str[k]);

  return str;
}

int main()
{
  string str = "0000";
 int   n = str.length();
  cout<<twosComplement(str,n)<<endl;
 
 return 0;
}
