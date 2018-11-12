#include<iostream>
using namespace std;

int firstnonrep(string str)
{
  int count[256] = {0};
    int i;
  for(i = 0;i<str.size();i++)
   count[str[i]]++;

  for(int i = 0;i<256;i++)
   if(count[i]==1)
   {
    cout<<char(i)<<endl;
     break; 
   }
}

int main()
{
  string str = "aabbbbcddeff";
 string ss = "india";  
firstnonrep(ss);
  
  return 0;
}
