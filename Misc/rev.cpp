#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool  rev (int n)
{
//  int n = 123;
    int rev = 0;
 while(n > 0)
 {
   rev = rev*10 + (n%8);
   n/=8;
 }
 string str = to_string(rev);
 int len = str.length();
 cout<<str<<endl;
 for(int i = 0;i<len/2;i++)
 {
  if(str[i]!=str[len-i-1]&&str[i] < '7')
   return false;
 }
 
  return true;
}

int main()
{
  int n = 97;
  rev(n) ? cout<<"Palindrome\n" : cout<<"Not Palindrome\n";
 return 0;
}
