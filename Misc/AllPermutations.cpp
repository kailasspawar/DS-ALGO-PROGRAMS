#include<iostream>
#include<algorithm>
using namespace std;

int permute(string str,int l,int r,int &pos)
{
 static int count = 0;
  if(l == r)
  {
    count++;
    cout<<str<<endl;
    if(str == "cba")
      pos = count;
   // return ;
  }
  else
  {
    for(int i = l;i<=r;i++)
    {
      swap(str[l],str[i]);
      permute(str,l+1,r,pos);
      swap(str[l],str[i]);
    }
  }
 return count;
}

int main()
{
  string str = "abc";
  sort(str.begin(),str.end());
  int pos = 0;
  cout<<permute(str,0,str.length()-1,pos)<<endl;
  cout<<pos<<endl;
 return 0;
}
