#include<iostream>
#include<cstring>
using namespace std;
bool ismember(char c,string s1)
{
  int i,j;
  for(i=0;i<s1.size();i++)
  {
      if(s1[i] == c)
       {
         return true;
         break;
       }
 }
 return false;
}
int main()
{
  char arr[20];
  string s1;
   string s2;
  int i ,j;
  s1 = "geeksforgeeks";
   s2 = "ks";
  j = 0;
  for(i=0;i<s1.size();i++)
  {
    if(!ismember(s1[i],s2))
     arr[j++] = s1[i];
    else
     continue;
  }
 
 arr[j] = '\0';
 cout<<arr<<endl;
 return 0;
}
