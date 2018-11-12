#include<iostream>
#include<string.h>
using namespace std;

void removeAandBC(char *str,int n)
{
  int i = -1;
  int j = 0;
 while( j < n)
 {
   if(j < n-1 && str[j]=='a' && str[j+1]=='c')
    j+=2;
   else if(str[j]=='b')
    j++;
   else if(i >= 0 && str[j]=='c'&&str[i]=='a')
   {
    i--;
    j++;
   }
   else
     str[++i] = str[j++];
 }
 str[++i] = '\0';
}

int main()
{ 
  char str[] = "abcdacacd";
      int n = strlen(str);
   removeAandBC(str,n);
  cout<<"str after removing "<<str<<endl;
 return 0;
}
