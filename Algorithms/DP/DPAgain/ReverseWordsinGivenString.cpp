#include<iostream>
#include<algorithm>
using namespace std;
void rev(string &str,int s,int e)
{
 while(s < e)
  swap(str[s++],str[e--]);
}
void reversewords(string &str)
{
    int start = 0;
  for(int i = 0;i<str.length();i++)
  {
    if(str[i] == ' ')
    {
      rev(str,start,i-1);
      start = i+1; 
    }
    if(i == str.length()-1)
      rev(str,start,i);
     
  }
  reverse(str.begin(),str.end());
  cout<<str<<endl;
}

int main()
{
  string str = "   i love programming very much";
  reversewords(str);
 return 0;
}
