#include<iostream>
#include<algorithm>
#define mx 256
using namespace std;

void printDist(string str)
{
//  remove_if(str.begin(),str.end() ,[] (char i) { return (i==' ');});
  int count[mx] = {0};

  for(int i = 0;i<str.size();i++)
  {
    if(str[i]==' ')
     i++;
    count[str[i]]++;
 }

  for(int i = 0;i<str.size();i++)
   if(count[str[i]]==1)
    cout<<str[i];
 cout<<endl;
}

int main()
{
  string str = "hello Geeks";
    printDist(str);
 return 0;
}
