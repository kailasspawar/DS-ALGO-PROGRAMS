#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
// Assume base address of "GeeksQuiz" to be 1000
int main()
{
   char str[40];
//  scanf("%4s",str);
//   gets(str); 
  char *sp = "i love you\n";
  sp+=2;
   printf("%c\n",*sp);
   int n = strlen(str);
  char s[40];
   int j = 0;
  for(int i = 0;i<n;i++)
  {
    while(str[i]==' ')
      i++;
   
     s[j++] = str[i];
  }
   
  s[j] = '\0';
// cout<<s<<endl;      

  return 0;
}
