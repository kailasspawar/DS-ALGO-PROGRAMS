#include<iostream>
using namespace std;

int countCharsAtSamePos(string str)
{
  int n = str.length();
  int count = 0; 
 for(int i = 0;i<n;i++)
 {
  if(i==str[i]-'a' || i==str[i]-'A')
   count++;
 }

 return count;
}
int main()
{
 string str = "abcjklfh";
 cout<<countCharsAtSamePos(str)<<endl;
 return 0;
}
