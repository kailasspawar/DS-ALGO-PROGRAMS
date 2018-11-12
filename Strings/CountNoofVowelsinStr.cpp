#include<iostream>
#include<algorithm>
using namespace std;
bool isvovel(char i)
{
 string str = "aeiou";
   return (str.find(i)!=string::npos);
}

int isVowel(string str,int len,int i)
{
  if(i==len)
    return 0;
  if(isvovel(str[i]))
    return 1+isVowel(str,len,i+1);
  else
    return isVowel (str,len,i+1);
}
int main()
{
  string str = "geeksforgeeks portal";
    cout<<"No of vowels :"<<count_if(str.begin(),str.end(),isvovel)<<endl;
  cout<<"Rec No of Vows :"<<isVowel(str,str.size(),0)<<endl;
return 0;
}
