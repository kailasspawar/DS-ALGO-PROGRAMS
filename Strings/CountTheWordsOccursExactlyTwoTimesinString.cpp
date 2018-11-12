#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int countOccr(string str[],string str1,int j,int n)
{ 
  int count = 0;
  for(int i = j;i<n;i++)
   if(str[i][0]==str1[0])
    count++;
  return count;
}
int printCount(string str[],int n)
{
  sort(str,str+n);
// for(int i = 0;i<n;i++)
//  cout<<str[i]<<" ";
// cout<<endl;
 
 int j = 0,count = 0;
 while(j < n)
 {
   if(countOccr(str,str[j],j+1,n)==1)
   {
     cout<<str[j]<<" ";
      ++count;
      j+=2;
   }
   else if(countOccr(str,str[j],j,n)>1)
     j+=countOccr(str,str[j],j,n);
   else
    j+=2;
 }
 cout<<endl;
 return count;
}

int main()
{
  string str[] = {"hate", "love", "peace", "love","dove","peace", "hate", "dove","love", "peace","love", "peace"};
   string ss[] = {"Om", "Om", "Shankar", "Tripathi","Tom", "Jerry", "Jerry"}; 
  int n = sizeof(str)/sizeof(str[0]);
     int n1 =  sizeof(ss)/sizeof(ss[0]);
  cout<<printCount(str,n)<<endl;
  cout<<printCount(ss,n1)<<endl;
  string s = "hate";
 return 0;
}
