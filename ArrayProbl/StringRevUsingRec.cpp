#include<bits/stdc++.h>
using namespace std;

void reverse(char *str)
{
  if(*str)
  {
    reverse(str+1);
    cout<<*str;
  }
}
int main()
{
 char str[] = "geeks";

  reverse(str);
  cout<<endl;
  return 0;
}
