#include<iostream>
using namespace std;

bool dictionaryContsins(string word)
{
  string dict[] = {"i","like","sam","sung",
		   "samsung","mobile","ice",
		   "cream","icecream","man","go","mango"};
   int n = sizeof(dict)/sizeof(dict[0]);
   for(int i = 0;i<n;i++)
     if(dict[i].compare(word) == 0)
      return true;
   return false;
}

bool wordBreak(string str)
{
  int size = str.size();

  if(size == 0)
    return true;

  for(int i = 1;i<=size;i++)
  {
    if(dictionaryContsins(str.substr(0,i)) &&
       wordBreak(str.substr(i,size-1)))
        return true;
  }
 return false;
}

int main()
{
  wordBreak("ilikesamsung") ? cout<<"Yes\n" : cout<<"No\n";
  return 0;
}
