#include<iostream>
using namespace std;
int countRotation(string str)
{
  int n = str.length();
  string temp = str+str;
  for(int i = 1;i<=n;i++)
  {
    string sub = temp.substr(i,n);

    if(sub==str)
    {
       return i;
      break;
    }
  }
  return n;
}

int main()
{
  string str = "abab";
  cout<<countRotation(str)<<endl;

  return 0;
}
