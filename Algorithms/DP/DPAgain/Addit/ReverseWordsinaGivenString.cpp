#include<iostream>
#include<algorithm>
using namespace std;

void rev(string &str,int s,int e)
{
 while(s < e)
  swap(str[s++],str[e--]);
}

string reverseWords(string &str)
{
 int i = 0,word_begin = 0;
  while(i < str.length())
  {
    if(str[i] == ' ' && word_begin == 0)
     word_begin++;
    if(str[i] == ' '&&word_begin > 0)
    {
     rev(str,word_begin,i-1);
     word_begin = i+1;
    }
    if(i == str.length()-1)
     rev(str,word_begin,i);
   i++;
  }
 reverse(str.begin(),str.end());
 return str;
}

int main()
{
  string str = "i love programming";
  cout<<reverseWords(str)<<endl;
 return 0;
}
 
