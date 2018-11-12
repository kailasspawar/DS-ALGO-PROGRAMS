#include<iostream>
#include<unordered_set>
using namespace std;

void findcommon(int a[],int b[],int c[],int n,int m,int o)
{
  unordered_set<int>us;

  for(int i = 0;i<m;i++)
   us.insert(a[i]);
  for(int i = 0;i<n;i++)
   if(us.find(b[i]) == us.end())
    us.insert(b[i]);

  for(int i = 0;i<o;i++)
   if(us.find(c[i]) != us.end())
    cout<<c[i]<<" ";
  cout<<endl;
}

int main()
{
  int a[] = {10,20};
     int b[] = {5,10,30};
    int c[] = {20,10};
  findcommon(a,b,c,2,3,2);
 return 0;
}
