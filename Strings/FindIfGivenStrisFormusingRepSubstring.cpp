/*
 Input: str = "abcabcabc"
Output: true
The given string is 3 times repetition of "abc"

Input: str = "abadabad"
Output: true
The given string is 2 times repetition of "abad"

Input: str = "aabaabaabaab"
Output: true
The given string is 4 times repetition of "aab"

Input: str = "abcdabc"
Output: false
*/
#include<iostream>
using namespace std;

bool isRep(string str,int i,int count,int n)
{
  if(i >= n)
    return false;
  string temp = "";
  int j = 0;
  while(i < n)
  {
    if(temp.find(str[i]) == string::npos)
    {
     temp.push_back(str[i]);
       j++;
    }

    if(temp.length() == count)
     break;
   i++;
  }
 if(j < count)
   return false;
 else if(j == count && i == n-1)
   return true;
 else
    return isRep(str,i+1,count,n);
}


bool checkisRep(string str)
{
 int n = str.length();
   int visited[26] = {0};
   for(int i = 0;i<n;i++)
    visited[str[i]-'A']++;

   int count = 0;
   for(int i = 0;i<26;i++)
    if(visited[i])
      count++;

  return isRep(str,0,count,n) ? true : false;
}

int main()
{
  char txt[][100] = {"ABCABC", "ABABAB", "ABCDABCD", "GEEKSFORGEEKS",
                      "GEEKGEEK", "AAAACAAAAC", "ABCDABC"};
	 int n = sizeof(txt)/sizeof(txt[0]);
	 for (int i=0; i<n; i++)
	   checkisRep(txt[i])? cout << "True\n" : cout << "False\n";
   //   cout<<checkisRep("abcabcabc")<<endl;
	    return 0;
}
