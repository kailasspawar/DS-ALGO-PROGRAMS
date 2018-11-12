#include<iostream>
#include<string.h>
#define Max 26
using namespace std;
bool allSame(int arr[],int n)
{
 int ele,i;
 for( i = 0;i<n;i++)
 {
  if(arr[i])
  {
   ele = arr[i];
    break;
  }
 }
   
 for(int j = i+1;j<n;j++)
   if(arr[j]&&arr[j]!=ele)
     return false;

return true;
}
   
bool ifPossible(string str)
{
  int n = str.length();
  int count[Max] = {0};
//  memset(count,0,Max);

  for(int i = 0;i<n;i++)
   count[str[i]-'a']++;

   if(allSame(count,Max))
     return true;
   for(int i = 0;i<Max;i++)
   {
    if(count[i]>0)
      count[i]--;
   }
   if(allSame(count,Max))
    return true;

  return false;
}

int main()
{
  string str = "xyyzz";
  (ifPossible(str)) ? cout<<"Yes\n" : cout<<"No\n";

  return 0;
}
