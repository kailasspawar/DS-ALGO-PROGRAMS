#include<iostream>
#include<map>
using namespace std;

void sortFreq(int arr[],int n)
{
  map<int,int>mp;
     multimap<int,int,greater<int> >m;
 int j = 0;
  for(int i = 0;i<n;i++)
   mp[arr[i]]++;
  for(auto it = mp.begin();it!=mp.end();it++)
    m.insert(make_pair(it->second,it->first));
  for(auto it = m.begin();it!=m.end();it++)
  {
   for(int i = 0;i< it->first;i++)
    arr[j++] = it->second;
  }
}

int main()
{
  int arr[] = {2,5,2,6,-1,99999,5,8,8,8};
     int n = sizeof(arr)/sizeof(arr[0]);
  sortFreq(arr,n);
  for(int i : arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
}
