#include<iostream>
#define mx 256
using namespace std;

string printchars(string s1,string s2)
{
 int count1[mx]={0};
   int count2[mx]={0};
 string ss;int j;
   for(int i = 0;i<s1.length();i++)
    count1[s1[i]]++;

   for(int i = 0;i<s2.length();i++)
    count2[s2[i]]++;

   for(j = 0;j<mx;j++)
   {
     if(count1[j]&&count2[j])
     {
     //  cout<<j<<endl;
       int n = min(count1[j],count2[j]);
     //  char ele = char(j);
       for(int k = 0;k<n;k++)
       { 
    //    cout<<j<<" ";
        ss.push_back(j);
       }
     }
   }
 return ss;
}

int main()
{
  string s1 = "geeks";
    string s2 = "forgeeks";
  cout<<printchars(s1,s2)<<endl;

  return 0;
}
