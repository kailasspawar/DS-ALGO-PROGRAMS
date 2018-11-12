#include<iostream>
#include<string.h>
#define Max 26
using namespace std;
bool isValid(int count[],int k)
{
  int s = 0;
  for(int i = 0;i<Max;i++)
   if(count[i])
    s++;
  return (k >= s);
}
int LongestSubstr(string str,int k)
{
  int n = str.size();
  int count[Max] = {0};
  int u = 0;
  for(int i = 0;i<Max;i++)
  {
    if(count[str[i]-'a'] == 0)
      u++;
    count[str[i]-'a']++;
  }

  if(u < k)
    return -1;

  int max_window_size = 1,curr_start = 0,curr_end = 0,max_window_start= 0;

  fill_n(count,Max,0);

  count[str[0]-'a']++;

  for(int i = 1;i<n;i++)
  {
    count[str[i]-'a']++;
    curr_end++;

    while(!isValid(count,k))
    {
      count[str[curr_start]-'a']--;
      curr_start++;
    }
    if(curr_end-curr_start+1 > max_window_size)
    {
      max_window_size = curr_end-curr_start+1;
      max_window_start = curr_start;
    }
 }
 cout<<"the substr is "<<str.substr(max_window_start,max_window_size)<<endl;
return max_window_size;
}

int main()
{
  string str = "aabacbebebe";
    int k = 3;
   cout<<LongestSubstr(str,k)<<endl;
 return 0;
}

