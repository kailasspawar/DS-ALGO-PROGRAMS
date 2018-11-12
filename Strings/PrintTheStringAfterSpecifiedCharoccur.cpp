#include<iostream>
#include<algorithm>
using namespace std;
bool func(char c)
{
 return ('i'==c);
}
void printOccr(string str,char c,int count)
{
  string str1 ;
 int cnt = count_if(str.begin(),str.end(),func);
      if(cnt == count)
        str1 = str.substr(str.rfind(c)+1);

  
    cout<<str1<<endl;
}

int main()
{
  string str = "this is demo string";
   char c = 'i';
  int cnt = 3;
 printOccr(str,c,cnt);
 return 0;
}  
