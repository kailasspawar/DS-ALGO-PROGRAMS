#include<iostream>
using namespace std;

void printRepeated(string str)
{
  int len  = str.size();
   int count[256] = {0};
  int i; 
   for(i = 0;i < len;i++)
    count[str[i]]++;

   for(i = 0;i<256;i++)
    if(count[i] > 1)
    cout<<"count = "<<count[i]<<" "<<char(i)<<"\n";

   cout<<"\n";
}

int main()
{
  string str = "geeksforgeeks";
    printRepeated(str);
  return 0;
}
