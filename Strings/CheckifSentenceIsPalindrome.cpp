#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(string str)
{
  int n = str.length();
  transform(str.begin(),str.end(),str.begin(), [] (char c) { return tolower(c);});
  cout<<str<<endl;
  int i = 0,j = n-1;

  while(i <= j)
  {
    if(str[i]==' ' || str[i]=='.')
      i++;
    if(str[j]==' ' || str[j]=='.')
     j--;

    if(str[i]!=str[j])
      return false;
   i++;j--;
  }
 return true;
}
int main()
{
  string str = "Too Hot to hooT.";
  isPalindrome(str) ? cout<<"Palindrome sentence\n" : cout<<"Not Palindrome\n";
  return 0;
}
  
