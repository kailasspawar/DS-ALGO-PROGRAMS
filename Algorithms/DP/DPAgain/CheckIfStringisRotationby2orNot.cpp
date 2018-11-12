#include<iostream>
using namespace std;

int checkisRotation(string s1,string s2)
{
  int n = s1.length();
     int m = s2.length();
   if(m != n)
     return false;
  string str = s1+s1;
   if(str.substr(2,n) == s2 || str.substr(n-2,n) == s2)
    return true;
 return false;
}

int main()
{
 string a = "amazon";
    string b = "onamaz";
  checkisRotation(a,b) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
