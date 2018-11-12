#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  int a[] = {1,2,3,4,5};
  int b[] = {2,3,4,5};
  string s1 = "ababea";
  string  s = "premyy10";
  int n = sizeof(a)/sizeof(a[0]);
  int i,j;char c;
  int k = s1.size();int p;
 for(i=0,j=k-1;i<k&&j>=0;i++,j--)
 {
   if(s1[i]!=s1[j])
   {
     p = j;
     break;
   }
 }
  s1[p] = '\0';
 // cout<<s<<endl;
  cout<<s1<<endl;
   for( i=0;i<n;i++)
   {
     if((a[i]^b[i]) != 0)
     {
      cout<<a[i]<<endl;
       break;
     }
    else
      continue;
   }
 return 0;
}    

 
