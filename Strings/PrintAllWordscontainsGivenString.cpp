//i/p - str = "sun"
//i/p - str[] = {"geeksforgeeks", "unsorted", "sunday","just", "sss" }; 
//o/p - {unsorted,sunday}
#include<iostream>
using namespace std;
void print(string str[],string s,int n)
{
  int count[256];
  int i,j,count1,len;
  len = s.size();
 for(i=0;i<len;i++)
  count[s[i]]=1;

 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(count[str[i]])
   {
    count1++;
  
    count[str[i+j]]=0;
  }
 }
 if(count1==len)
  cout<<str[i]<<endl;
 
 for(j = 0;j<len;j++)
  count[s[j]] = 1;
}
}
 
int main()
{
  string  s1 = "sun";
  string s[] = {"geeksforgeeks", "unsorted", "sunday","just", "sss" };
   int n = sizeof(s)/sizeof(s[0]);
  print(s,s1,n);
  return 0;
}


