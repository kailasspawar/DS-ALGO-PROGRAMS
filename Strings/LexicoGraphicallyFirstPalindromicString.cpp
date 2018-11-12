/*
  Input : malayalam
Output : aalmymlaa

Input : apple
Output : no palindromic string
*/
#include<iostream>
#define mx 26
using namespace std;
string findOddOcurr(int count[])
{
  string s = "";
  for(int i = 0;i<mx;i++)
  {
    if(count[i]%2 != 0)
    {
      count[i]--;
       s = s+(char)(i +'a');
       return s;
    }

  }
 return s;
}

string firstpalind(string str)
{
  int freq[mx] = {0};
  string front = "",rear = "";
 int len = str.length();
  for(int i = 0;i<len;i++)
   freq[str[i]-'a']++;

  string odd = findOddOcurr(freq);
   cout<<odd<<endl;
  for(int i = 0;i<mx;i++)
  {
    string temp = "";
    if(freq[i]!=0)
    {
       char ch = (char)(i+'a');
       for(int j = 1;j<=freq[i]/2;j++)
        temp = temp+ch;

       front = front + temp;
       rear = temp+rear;
    }
  }
 return (front+odd+rear);
}

int main()
{
  string str = "malayalam";
  cout<<firstpalind(str)<<endl;

  return 0;
}
