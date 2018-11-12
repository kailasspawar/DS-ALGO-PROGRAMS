#include<iostream>
#include<algorithm>
using namespace std;

char mostFreqSec(string str,int n)
{
  int count[256] = {0};
  char max ,secondmax ;
  int i;
 for(i = 0;i<n;i++)
  count[str[i]]++;
 int first = 0,second = 0; 
for(i = 0;i<256;i++)
{
  if(count[i] > count[first])
  {
   second = first;
    first = i; 
  }
  else
   if(count[i] > count[second]&&count[i]!=count[first])
    second = i;

 }
 return second;
}

int main()
{
 string str = "geeksforgeeks";
   int n = str.size();
 cout<<mostFreqSec(str,n)<<endl;
 return 0;
}
 
