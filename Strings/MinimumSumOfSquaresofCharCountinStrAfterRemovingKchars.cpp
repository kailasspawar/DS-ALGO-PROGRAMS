#include<bits/stdc++.h>
#define Max 26
using namespace std;

int minimumSum(string str,int k)
{
 int len = str.length();
  if(k>=len)
   return 0;

 int count[Max] = {0};
 for(int i =0;i<Max;i++)
  count[str[i]-'a']++;
 priority_queue<int> Q;
 for(int i =0;i<Max;i++)
  if(count[i])
   Q.push(count[i]);
 while(k--)
 {
  int temp = Q.top();
   Q.pop();
   temp = temp-1;
   Q.push(temp);
 }
 int res = 0;
 while(!Q.empty())
 {
  int ele = Q.top();
  res+=ele*ele;
  Q.pop();
 }
 return res;
 cout<<Q.size()<<endl;

}

int main()
{
  string str = "abbccc";
  int k = 2;
  cout<<minimumSum(str,k)<<endl;

 return  0;
 }
