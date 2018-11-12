#include<iostream>
using namespace std;

int maxLenSubstr(string str,int n)
{
  int low,high,start = 0,maxlen = 1;

  for(int i = 1;i<n;i++)
  {
    low = i-1;
    high = i;

    while(low>=0&&high<n&&str[low]==str[high])
    {
      if(high - low +1 > maxlen)
      {
       start = low;
       maxlen = high-low+1;
      }
      low--;high++;
    }

    high = i+1;
    low = i-1;
    while(low>=0&&high<n&&str[low]==str[high])
    {
      if(high - low +1 > maxlen)
      {
       start = low;
       maxlen = high-low+1;
      }
      low--;high++;
    }
  }

 cout<<"Max Palindromic Substr :"<<str.substr(start,maxlen)<<endl;

 return maxlen;
 }

 int main()
 {
  string str = "forgeeksskeegfor";
   int n = str.length();

   cout<<maxLenSubstr(str,n)<<endl;

  return 0;
}

    
