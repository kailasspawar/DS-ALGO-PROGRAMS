#include<iostream>
#include<cstring>
using namespace std;
int func(int m,int n)
{
  int i;int 
  ans = m;
 for(i=1;i<=n;i++)
 {
   ans = ans>>1;
   
 }
return ans;
}
 int main()
 {
  int m = 12;
   int n = 4;
 //  k = m>>n;
//  cout<<k<<endl;
  cout<<func(m,n)<<endl;
 return 0;
 }
