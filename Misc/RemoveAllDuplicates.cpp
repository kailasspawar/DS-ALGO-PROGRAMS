#include<iostream>
#include<algorithm>
using namespace std;

void remove(string &str)
{
  int count[256] = {0};
  int n = str.length();
  for(int i = 0;i<n;i++)
   count[str[i]]++;
//  reverse(str.begin(),str.end());
  for(int i = n;i>=0;)
  {
    if(count[str[i]] > 1)
    {
	count[str[i]]--;
        str[i] = '\0';
	i--;
    }
    else
      i--;
 }
}

int main()
{
  string str = "geeksforgeeks";
  char strr[] = "prempk";
    string str1; 
   str1 = strr;
  cout<<str1<<endl;
  remove(str);
 cout<<str<<endl;
return 0;
}
