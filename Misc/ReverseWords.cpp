#include<iostream>
using namespace std;
void reverse(char *begin,char *end)
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
  char *word_begin = NULL;
    char *temp = s;

  while(*temp)
  {
    if(word_begin == NULL && (*temp != ' '))
     word_begin = temp;

    if(word_begin && ((*(temp+1)== ' ') || (*(temp+1) == '\0')))
    {
      reverse(word_begin,temp);
      word_begin = NULL;
    }
   temp++;
 }

 reverse(s,temp-1);
}

int main()
{
   char str[] = "i Love you very much";
//     char *temp = str;
  reverseWords(str);
  cout<<str<<endl;
 return 0;
}
