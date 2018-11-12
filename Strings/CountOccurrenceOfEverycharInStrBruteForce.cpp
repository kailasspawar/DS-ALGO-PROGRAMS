#include<bits/stdc++.h>
using namespace std;
int count(string str,char c)
{
  int cnt = 0;
  for(int i = 0;i<str.size();i++)
   if(str[i]==c)
    cnt++;

  return cnt;
}
string countOccr(string str)
{
  int i,j;
  char count1[50];
  char *str1 = (char *)malloc(sizeof(char)*str.size());
  j = 0;
  i = 0;
  while(i < str.size())
  {
    int ele = count(str,str[i]);
     str1[j++] = str[i];
   str1[j++] = '0'+ele;
      i += ele;
  }
 str1[j] = '\0';

 return str1;
}

int main()
{
  string str = "wwwwaaadexxxxxx";
   cout<<countOccr(str)<<endl;
 return 0;
}
