#include<iostream>

using namespace std;

void generateBinStr(string str,int index)
{
  if(index == str.length())
  {
   cout<<str<<endl;
   return ; 
  }
  
  if(str[index] == '?')
  {
    str[index] = '0';
     generateBinStr(str,index+1);

    str[index] = '1';
     generateBinStr(str,index+1);
 }
 else
   generateBinStr(str,index+1);
}

int main()
{
  string str  = "1??0?101";
    generateBinStr(str,0);

   return 0;
}
