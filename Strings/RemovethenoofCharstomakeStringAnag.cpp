#include<iostream>
#include<stdlib.h>
#define max 256
using namespace std;

int removeChr(string s1,string s2)
{
  int n = s1.length();
    int m = s2.length();
   int count[max] = {0};
   for(int i = 0;i<n ;i++)
     count[s1[i]]++;
   for(int i = 0;i<m;i++)
    count[s2[i]]--;
   int res = 0;
   for(int i = 0;i<max;i++)
    if(count[i])
     res+=abs(count[i]);
// cout<<res<<endl;
  return res;
 }

 int main()
 {
   string s1 = "bcadeh";
      string s2 = "hea";
   cout<<removeChr(s1,s2)<<endl;
   return 0;
}
