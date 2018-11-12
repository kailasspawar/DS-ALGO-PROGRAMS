#include<iostream>
using namespace std;

void generateStrings(int ones,int zeroes,string str,int len)
{
  if(len==str.length())
  {
   cout<<str<<" ";
    return ;
  }
  generateStrings(ones+1,zeroes,str+"1",len);
      if(ones > zeroes)
         generateStrings(ones,zeroes+1,str+"0",len);
}

int main()
{
  string str = "";
  generateStrings(0,0,str,4);
  cout<<endl;
  return 0;
}
