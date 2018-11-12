/*
Given a string, that contains special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

Examples:

Input:   str = "a,b$c"
Output:  str = "c,b$a"
Note that $ and , are not moved anywhere.  
Only subsequence "abc" is reversed

Input:   str = "Ab,c,de!$"
Output:  str = "ed,c,bA!$"*/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void reverse(char *str,int n)
{
 // char temp = str[n-1];
 int j = n-1,i = 0;
  while(i < j)
  {
    if(!isalpha(str[i]))
     i++;

    if(!isalpha(str[j]))
      j--;

   if(isalpha(str[i])&&isalpha(str[j]))
     swap(str[i],str[j]);
   i++;
   j--;
  }
 
  cout<<str<<endl;
}

int main()
{
  char str[] = "a!!!b.c.d,e'f,ghi";
   char *temp = str;
   int len = strlen(str);

   reverse(temp,len);

 return 0;
}
