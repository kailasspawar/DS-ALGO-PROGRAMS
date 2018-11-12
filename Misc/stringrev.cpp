#include<iostream>
using namespace std;
void rev(char *str,int n)
{
  if(n<0)
   return ;
  cout<<str[n];

   rev(str,n-1);
}

int main()
{
  char ss[] = "i love you";
   rev(ss,9);
 return 0;
}
