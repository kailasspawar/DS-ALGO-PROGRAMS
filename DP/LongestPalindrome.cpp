#include<iostream>
using namespace std;

string longetPalind(string str)
{
  int n = str.length();
  int start = 0,maxLen = 1;

  for(int i = 1;i<n;i++)
  {
    int low = i-1;
      int high = i;
    while(low >= 0 && high < n && str[low] == str[high])
    {
      if(high - low + 1 > maxLen)
      {
        start = low;
	maxLen = high - low + 1;
      }
     --low;
     ++high;
     }
   low = i-1,high = i+1;
   while(low >= 0 && high < n && str[low] == str[high])
   {
    if(high - low + 1 > maxLen)
    {
      start = low;
      maxLen = high - low + 1;
    }
   --low;
     ++high;
   }
 }
 return str.substr(start,maxLen);
}

int main()
{
 string str = "forgeeksskeegfor";
 cout<<longetPalind(str)<<endl;
 return 0;
}
