#include<iostream>
using namespace std;

bool isPalindome(string str,int n)
{
  for(int i = 0;i<n/2;i++)
   if(str[i]!=str[n-i-1])
     return false;

  return true; 
}

int main()
{
  string str = "acedeca";
    int n = str.length();
  isPalindome(str,n) ? cout<<"PAlindrome\n" : cout<<"Not Palindrome\n";
 return 0;
}
