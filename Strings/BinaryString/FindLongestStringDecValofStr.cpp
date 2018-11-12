#include<iostream>
#include<math.h>
#include<algorithm>
#include<climits>
using namespace std;

int BintoDec(string str)
{ 
  int n = str.length();
  int res = 0;
  int j = 0;
  for(int i = n-1;i>=0;i--)
  {
    if(str[i]=='1')
     res += pow(2,j);
    j++;
  }

 return res;
}
string decTobin(int n,string str)
{
 if(n <= 0)
 {
   reverse(str.begin(),str.end());
   return str;
 }
 int k = n%2;
 str.push_back(48+k);
 n/=2;
 return decTobin(n,str);
}
int printmax(int n1,int n2)
{
  string s1 = decTobin(n1,"");
    string s2 = decTobin(n2,"");
  int mx = INT_MIN;
  string res;
  int len = s1.length();
    int l = len;
  string temp;
 while(len > 0)
 {
   for(int i = 0;i<l - len+1;i++)
   {
     temp = s1.substr(i,len);
     int ln = temp.length();
     if(mx < ln && s2.find(temp)!=string::npos)
     {
      mx = ln;
          res = temp;
     }
   }
  len = len-1;
 }
return BintoDec(res);
}
int main()
{
  string str = "1010";
//    cout<<BintoDec(str)<<endl;

   cout<<printmax(15,11)<<endl;
  return 0;
}
