#include<iostream>
using namespace std;
bool isVowel(char ch)
{
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  return true;
 else
  return false;
}
string reverseVowels(string str)
{
  string vowel;
 int j = 0;
 for(int i=0;i<str.size();i++)
   if(isVowel(str[i]))
    vowel[j++] = str[i];

   for(int i = 0;i<str.size();i++)
     if(isVowel(str[i]))
      str[i] = vowel[--j];

  return str;
}

int main()
{
 string str = "hello world";

 string ss = reverseVowels(str);
 cout<<ss<<endl;
return 0;
}
