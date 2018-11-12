#include<iostream>
using namespace std;

string changeDigits(string str,int k)
{
  int l , r;
  l = 0;
    int n = str.length();
   r = n-1;
  string pal = str;
  while(l < r)
  {
    if(str[l]!=str[r])
    {
      pal[l] = pal[r] = max(str[l],str[r]);
       k--;
    }
    l++;
    r--;
  }

  if(k < 0)
   cout<<"Cant make str palindrome\n";

  l = 0,r= n-1;
  while(l <= r)
  {
    if(l==r)
    {
      if(k > 0)
        pal[l] = '9'; 
    }

    if(pal[l] < '9')
    {
      if(k >= 2 && pal[l]==str[l] && pal[r]==str[r])
      {
       k-=2;
       pal[l] = pal[r] = '9';
      }
      else if(k>=1 && (pal[l]!= str[l] || pal[r] != str[r]))
      {
        k--;
	 pal[l] = pal[r] = '9';
      }
   }

  l++;
  r--;
 }
  return pal;
}

int main()
{
 string str = "43435";
   int k = 3;
 cout<<changeDigits(str,k)<<endl;
 return 0;
}

