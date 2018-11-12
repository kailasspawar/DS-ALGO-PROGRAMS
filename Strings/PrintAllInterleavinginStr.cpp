#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void printIlRec(char *str1,char *str2,char *iStr,int m,int n,int i)
{
  if(m==0 && n==0)
   cout<<iStr<<endl;

  if(m!=0)
  {
    iStr[i] = str1[0];
   printIlRec(str1+1,str2,iStr,m-1,n,i+1);
  }
 if(n!=0)
 {
  iStr[i] = str2[0];
  printIlRec(str1,str2+1,iStr,m,n-1,i+1);
 }
}

void printStr(char *str1,char *str2,int m,int n)
{
  char *iStr = (char *)malloc(sizeof(char)*(m+n+1));

  iStr[m+n]='\0';
 printIlRec(str1,str2,iStr,m,n,0);

free(iStr);
}
int main()
{
  char s1[] = "AB";
   char s2[] = "CD";
  printStr(s1,s2,strlen(s1),strlen(s2));

  return 0;
}
