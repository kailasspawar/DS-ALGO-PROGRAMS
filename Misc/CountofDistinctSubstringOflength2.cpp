#include<iostream>
#include<map>
#include<vector>
using namespace std;

void printSubstr(string str)
{
 map<string,int>m;
  for(int i = 0;i<str.length()-1;i++)
   m[str.substr(i,2)]++;

  for(auto it = m.begin();it!=m.end();it++)
   cout<<it->first<<"->"<<it->second<<"\n";
  cout<<endl;
}

int main()
{
 vector<vector<int> >v;
 string str = "abcab";
 printSubstr(str);
   return 0;
}
