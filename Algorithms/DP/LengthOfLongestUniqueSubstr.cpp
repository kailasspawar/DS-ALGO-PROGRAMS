#include<iostream>
using namespace std;

int longestSubstr(string str)
{
 int n = str.length();
   int curr_len = 1,maxlen = 1,prevind;
  int visited[256] = {-1};

  visited[str[0]] = 0;
  
   for(int i = 1;i<n;i++)
   {
     prevind = visited[str[i]];

     if(prevind == -1 || i - curr_len > prevind)
       curr_len++;

     else
      {
         maxlen = max(maxlen,curr_len);

	 curr_len = i - prevind;
      }
    visited[str[i]] = i;
  }
  maxlen = max(maxlen,curr_len);
 return maxlen;
 }

 int main()
 {
   string str = "ABDEFGABEF";
      cout<<"Length of unique substr :"<<longestSubstr(str)<<endl;
   return 0;
 }
