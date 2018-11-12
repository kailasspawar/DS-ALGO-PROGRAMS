#include<iostream>
using namespace std;

int countDecoding(string str)
{
  int n = str.size();
  int count[n+1];
  count[0] = count[1] = 1;

  for(int i = 2;i<=n;i++)
  {
    if(str[i-1] > '0')
     count[i] = count[i-1];

    if(str[i-2] == '1' || (str[i-2]=='2' && 
        str[i-1] < '7'))
     count[i]+=count[i-2];

  }
 return count[n];
}

int main()
{
  string str = "1234";
  cout<<countDecoding(str)<<endl;
 return 0;
}
