//  if i/p => 1001  o/p => 1010
#include<iostream>
using namespace std;
char flip(char c)
{
  return c=='0' ? '1':'0';
}
string addOnetostr(string str,int n)
{
   int i ;
  for(i = n;i>=0;i--)
  {
   if(str[i] == '0')
    {
     str[i] = flip(str[i]);
         break;
    }
   else
     str[i] = flip(str[i]);
}
 if(i < 0)
  return "1"+str;

 return str;
}

int main()
{
  string str = "1001";
  int  n = str.length();
 cout<<addOnetostr(str,n)<<endl;

 return 0;
}
