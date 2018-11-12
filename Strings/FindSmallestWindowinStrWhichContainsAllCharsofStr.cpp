#include<iostream>
#include<climits>
#define mx 256
using namespace std;

string findWindow(string str)
{
 int count[mx] = {0};
 int distcnt = 0;
 int n = str.length();
 for(int i = 0;i<n;i++)
 {
   if(count[str[i]]==0)
   {
    count[str[i]]=1;
     distcnt++; 
   }
 }
 int cnt = 0;
 int start = 0,minind = INT_MAX,start_id = -1;
   int count_str[mx] = {0};
   for(int j = 0;j<n;j++)
    {
      count_str[str[j]]++;
     if(count_str[str[j]] == 1)
      cnt++;
     if(cnt == distcnt)
     {
       while(count_str[str[start]] > 1)
       {
        if(count_str[str[start]] > 1)
	 count_str[str[start]]--;
       start++;
      }
      int len_win = j-start+1;
      if(minind > len_win)
      {
       minind = len_win;
       start_id = start;
      }
    }
  }
   return str.substr(start,minind);
 }

int main()
{
 string str = "aabcbcdbca";
 cout<<findWindow(str)<<endl;

 return 0;
}
