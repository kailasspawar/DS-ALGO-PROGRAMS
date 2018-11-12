#include<iostream>
#include<vector>
using namespace std;
vector<string>V;
bool anagram(string s1,string s2)
{
  int count1[26] = {0};

 int i;
  for(i=0;s1[i]&&s2[i];i++)
  {
   count1[s1[i]-'a']++;
   count1[s2[i]-'a']--;
  }
  
  if(s1[i] || s2[i])
    return false;

 for(i=0;i<26;i++)
 {
   if(count1[i])
    return false;
 }

 return true;
}

bool isMem(string str,vector<string>S)
{
  for(int i = 0;i<S.size();i++)
  {
   if(str==S[i])
    return true;
  }
 return false;
}

void allAnagramTogether(string s[],int n)
{
 int i,j;
 for(i=0;i<n-1;i++)
 { 
  if(!isMem(s[i],V))
    V.push_back(s[i]);  
  for(j=i+1;j<n;j++)
  {
    if(anagram(s[i],s[j])&&V.size()<n)
    {
      if(!isMem(s[j],V))
       V.push_back(s[j]);
    }
   }
 }
}
int main()
{
 string arr[] = {"cat", "dog", "tac", "god", "act","boss","ogd","ssbo"};
 int n = sizeof(arr)/sizeof(arr[0]);
  allAnagramTogether(arr,n);
 for(int i = 0;i<V.size();i++)
  cout<<V[i]<<"\t";
 
 return 0;
}
