#include<bits/stdc++.h>
using namespace std;

int printCount(string str[],int n)
{
   map <string, int> m;
 
   for(int i = 0;i<n;i++)
    m[str[i]]+=1;
  int res = 0;
  map<string,int>::iterator it ; 
 for(it = m.begin();it!=m.end();it++)
  if(it->second == 2)
   res++;

 return res;
}
int main()
{
   string str[] = {"hate", "love", "peace", "love","dove","peace", "hate", "dove","love", "peace","love", "peace"};
  int n = sizeof(str)/sizeof(str[0]);
  cout<<printCount(str,n)<<endl;
  return 0;
}
