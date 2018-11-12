#include<iostream>
using namespace std;

 void reverse(string str,int i)
 {
   if(i<str.size())
   {
     reverse(str,i+1);
     cout<<str[i];
   }
 }

 int main() 
 {
   string s1 = "hello";
  reverse(s1,0);
  return 0;
 }
