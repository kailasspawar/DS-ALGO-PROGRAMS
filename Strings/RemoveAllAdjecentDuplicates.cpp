#include<iostream>
#include<string.h>
using namespace std;
void removedupli(string &str)
{
pp:  int n = str.length();
  if(n <= 1)
   return ;
  int i = 0;
   for(i = 0;i<n-1;i++)
  {
    if(str[i]==str[i+1])
    {
      str[i] = '\0';
        str[i+1] = '\0';
      break;
    }
  }
}

char* removeDup(char *str,int len)
{
  int i ,k = 0;
  for(i = 1;i < len;i++)
  {
    
     if(str[i-1]!=str[i])
       str[k++] = str[i-1];
     
     else
      while(str[i-1]==str[i])
       i++;

 }
 str[k++] = str[i-1];
  str[k] = '\0';
 if(k!=len)
   removeDup(str,k);
 else
  return str;
}
int main()
{
  char str[] = "geeksforgeeks";
  int len = strlen(str);  
   cout<<removeDup(str,len)<<endl;
 char str4[] = "gghhg";
    cout << removeDup(str4, strlen(str4)) << endl;
 
    char str5[] = "aaaacddddcappp";
    cout << removeDup(str5, strlen(str5)) << endl;
 
    char str6[] = "aaaaaaaaaa";
    cout << removeDup(str6, strlen(str6)) << endl;
 
    char str7[] = "qpaaaaadaaaaadprq";
    cout << removeDup(str7, strlen(str7)) << endl;
 
    char str8[] = "acaaabbbacdddd";
    cout << removeDup(str8, strlen(str8)) << endl;
 
    char str9[] = "acbbcddc";
    cout << removeDup(str9, strlen(str9)) << endl;
   char str10[] = "ddferfaddeq";
  string str1 = "azxxzy";
  removedupli(str1);
   cout<<"The string is\n"<<str1<<endl;
 return 0;
}
