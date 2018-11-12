#include<iostream>
using namespace std;

void permute(string str,int l,int r)
{
  if(l == r)
  {
   cout<<str<<endl;
   return;
  }
  else
  {
    for(int i = l;i<=r;i++)
    {
      swap(str[l],str[i]);
      permute(str,l+1,r);
      swap(str[l],str[i]);
    }
  }
}

int main()
{
  string str = "abc";
  permute(str,0,str.length()-1);
 return 0;
}
