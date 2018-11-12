#include<stdio.h>
#include<string.h>
void reverse(char *s)
{
 int i;
 int p = strlen(s);
 for(i=p-1;i>=0;i--) 
 {
   printf("%c",s[i]);
 }
 printf("\n");
}

int main()
{ 
  int i ,len;
  char str2[50];
  gets(str2);
//  puts(str2);
//  reverse(str2);
  len = strlen(str2);
  char str[20];
  int j;
   j = 0;i=0;
  while(str2[i]!='\0')
  {
   if(str2[i]!=' '&&str2[i]!='\0')
   {
     str[j]=str2[i];
     j++;
     i++;
   }
   else
   {
     str[j] = '\0';
     reverse(str);
     j = 0;
     i++;
   }
 }
 reverse(str);
  return 0;
}
