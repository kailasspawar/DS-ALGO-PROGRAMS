#include<iostream>
using namespace std;

int countSubstr(string str)
{
  int size = str.length();
  cout<<str.substr(0,3)<<endl;
  for(int i = 0;i<size/2;i++);
}
int main()
{
 string str = "prempawar";
 countSubstr(str);
 return 0;
}
  
