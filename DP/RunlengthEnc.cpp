#include<iostream>
using namespace std;

string runLength(string str)
{
 int n = str.length();
  
 string res = "";
 for(int i = 0;i<n;i++)
 {
   res = res+str[i];
  int count = 1;
  while(i+1 < n && str[i] == str[i+1])
  {
    count++;
    i++;
   } 
 res = res + to_string(count);
}
 return res;
}
int main()
{
  string str = "wwwwwaaadexxx";
  cout<<runLength(str)<<endl;
 return 0;
}
