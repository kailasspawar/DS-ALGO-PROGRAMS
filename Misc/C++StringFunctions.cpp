#include<iostream>
using namespace std;

int main()
{
  string str = "i love my family";
    string str1 = "like";

  cout<<"Original string is :"<<str<<endl;
  string ss = " So much";
  str.append(ss);

  cout<<"Append char :"<<str<<endl;
 str.replace(2,4,str1);
 cout<<"After Replace :"<<str<<endl;
   cout<<"SEarching "<<str.find("ily")<<endl;
   if(str.find("pk")==string::npos)
    cout<<"Yes\n";
 return 0;
}

