#include<iostream>
#include<algorithm>
using namespace std;

void rev(char *begin,char *end)
{
  char temp;
  while(begin < end)
  {
    temp = *begin;
     *begin++ = *end;
     *end-- = temp;
  }
}
void reverseWords(char *s)
{
  char *word_begin = s;
    char *temp = s;
   cout<<*temp<<endl;
  while(*temp)
  {
    temp++;
    if(*temp == '\0')
    {
     rev(word_begin,temp-1);
    }
    else if(*temp == ' ')
    {
      rev(word_begin,temp-1);
       word_begin = temp+1;
    }
  }
 rev(s,temp-1);
  
}
    
int main()
{
  char s[] = "i love programming very much";
   char *temp = s;
   reverseWords(s);
  cout<<s<<endl;
 return 0;
}    
