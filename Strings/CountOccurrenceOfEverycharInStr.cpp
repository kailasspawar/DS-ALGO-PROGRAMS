
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
#define CNT 50
using namespace std;
string countOccur(string str)
{ 
  int rLen;
  int len = str.size();
  char *dest =(char *)malloc(sizeof(char)*(2*len+1));
  char count[CNT];
 int j = 0,i,k;
  for( i = 0;i < len;i++)
  {
   dest[j++]=str[i];
   rLen = 1;
   while(i+1 < len&&str[i]==str[i+1])
   {
       rLen++;
     i++;
   }

   sprintf(count,"%d",rLen);

   for(k = 0;*(count+k);k++)
   {
    dest[j++] = count[k];
   }
  }
    dest[j] = '\0';
 return dest;
}

int main()
{
  string str = "geeksforgeeks";
  cout<<countOccur(str)<<endl;
  
  return 0;
}
