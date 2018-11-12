#include<iostream>
#include<algorithm>
using namespace std;

char *myAtoi(int num,char *str,int base)
{
  int i =0;
  bool isNegative = false;

  if(num == 0)
  {
    str[i++] = '0';
    str[i] = '\0';
   return str;
  }
  if(num < 0 && base == 10)
   isNegative = true;

  while(num!=0)
  {
    int rem = num%base;
    str[i++] = rem > 9 ? (rem-10) + 'a' : rem + '0';
    num/=base;
  }

  if(isNegative)
   str[i++] = '-';

  str[i] = '\0';
 reverse(str,str+i);
 return str;
}

int main()
{
  int n = 16;
      char str[50];
   int base = 2;
  cout<<myAtoi(n,str,base)<<endl;
 return 0;
}
