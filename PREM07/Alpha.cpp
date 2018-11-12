#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str="i love my family and my mother";
  string s = "like";
  int count=0;
  str.replace(2,0,s);
  cout<<str.find("and",0)<<endl; 
  cout<<str<<endl;
 for(int i=0;i<str.size();i++)
 {
   if(i==(str[i] - 'a') || i==(str[i] - 'A'))
    count++;
 }
 
 cout<<count<<endl;
} 
 
