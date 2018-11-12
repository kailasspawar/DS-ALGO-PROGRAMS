#include<iostream>
using namespace std;

template<typename T>
T Max(T a,T b)
{
  return (a > b) ? a : b;
}
bool isAnagram(string s1,string s2)
{
  int n = s1.length();
  if(n!=s2.length())
   return false;
  int count[26] = {0};
  for(int i = 0;i<n;i++)
  {
   count[s1[i]-'a']++;
   count[s2[i]-'a']--;
  }
  for(int i = 0;i<26;i++)
   if(count[i])
    return false;
  return true;
}
int main()
{
 isAnagram("dog","god") ? cout<<"Yes\n" : cout<<"No\n";
  cout<<Max(10,20)<<endl;
  cout<<Max(3.5,7.3)<<endl;
  cout<<Max('d','w')<<endl;
 return 0;
}
