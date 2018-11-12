#include<iostream>
#include<string.h>
using namespace std;

void decode(char *str,int n)
{
  int i = -1,k = n/2 + 1;
  for(int j = 0;j<n;j++)
  {
   if(i%2==0)
    str[++i] = str[j];
   else
    str[k++] = str[j];
  }
 str[k] = '\0';
 cout<<str<<endl;
}
int main()
{
  char str[] = "a1b2c3d4e5f6g7h8i9j1k2l3m4";
    int n = strlen(str);
  decode(str,n);
 return 0;
}
