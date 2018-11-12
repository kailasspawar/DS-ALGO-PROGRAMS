#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int giveLength(string s1,string s2)
{
  int count[26] = {0};
  int n = s1.length();
    int m = s2.length();
  for(int i = 0;i<n || i<m;i++)
  {
   count[s2[i]-'a']++;
    count[s1[i]-'a']--;
  }
  int res = 0;
  for(int i = 0;i<26;i++)
   if(count[i] > 0)
     res+=count[i];
   
 return (m-res);
}
void printMaxlen(string arr[],string str,int size)
{
  unordered_map<string,int>m;
  for(int i = 0;i<size;i++)
  {
    int n = giveLength(arr[i],str);
    m[arr[i]] = n;
  }
 int maxlen = -1;
       string str1;
 for(auto it=m.begin();it!=m.end();it++)
 {
  if(maxlen < it->second)
  {
    maxlen = it->second;
     str1 = it->first;
   }
 }
   cout<<str1<<endl;
 
}
int main()
{
  string s1 = "apple";
     string s2 = "abpcplea";
   cout<<giveLength(s1,s2)<<endl;
 string arr[] = {"pintu", "geeksfor", "geeksgeeks", 
                                         " forgeek"} ;
  string str1 = "geeksforgeeks";
 int size = sizeof(arr)/sizeof(arr[0]);
 printMaxlen(arr,str1,size);
  return 0;
}
