#include<iostream>
using namespace std;

int countSubstr(string str)
{
  int count = 0;
  for(int i = 0;i<str.size();i++)
    if((str[i]-'0')%2==0)
     count+=(i+1);
 
  return count;
}
int main()
{
 string str = "12345";
  cout<<countSubstr(str)<<endl;
 return 0;
}
