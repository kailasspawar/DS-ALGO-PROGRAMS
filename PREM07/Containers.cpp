#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
 cin>>n;
  list<int>l;
 list<int>::iterator it;
 for(int i = 1;i<=n;i++)
  l.push_back(i);
 
 for(it = l.begin();it!=l.end();++it)
 {
  cout<<*it<<" ";
 }
 cout<<endl;
 return 0;
}

