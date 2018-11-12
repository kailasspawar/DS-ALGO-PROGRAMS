#include<iostream>
#include<unordered_map>
using namespace std;

int countPal(string str)
{
  unordered_map<string,int>m;

  for(int i = 0 ;i<str.length();i++)
  {
    for(int j = 0 ;i<=i ; j++)
    {
      if(!str[i+j])
        break;
      if(str[i-j]==str[i+j])
      { 
       if((i+j+1) - (i-j) > 1)
         m[str.substr((i-j),(i+j+1)-(i-j))]++;
      }
     else
       break;
    }
  for(int j = 0;j<=i;j++)
  {
    if(!str[i+j+1])
     break;

    if(str[i-j]==str[i+j+1])
    {
     if((i+j+2) - (i-j) > 1)
      m[str.substr((i-j),(i+j+2)-(i-j))]++;
    }
  else
    break;
  }
 }
 return m.size();
}

int main()
{
 string str = "abbaeae";
    cout<<countPal(str)<<endl;
  return 0;
}

 

