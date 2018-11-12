#include<iostream>
using namespace std;

string longetsPalin(string str)
{
  int maxlen = 1;
 
  int n = str.length();
  int start = 0;
  for(int i = 1;i<n;i++)
  {
    int l = i-1, r = i;
    while( l >= 0 && r < n && str[l] == str[r])
    {
      if(maxlen < r - l + 1)
      {
       start = l;
        maxlen = r - l + 1; 
      }
      l--;
      r++;
    }

    l = i-1;
    r = i+1;

    while(l >= 0 && r < n && str[l] == str[r])
    {
     if(maxlen < r - l + 1)
     {
      start = l;
       maxlen = r - l + 1;
     }
       l--;
      r++;
   }
 }
 
 cout<<"Longest pal len "<<maxlen<<endl;
 return str.substr(start,maxlen);
}

int main()
{
  string str = "forgeeksskeegfor";
  cout<<longetsPalin(str)<<endl;
 return 0;
}
