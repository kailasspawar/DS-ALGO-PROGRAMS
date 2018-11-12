#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

void sortFreq(int arr[],int n)
{
   map<int,int>m;
      map<int,int>mp;
   for(int i = 0;i<n;i++)
   {
      if(m.find(arr[i])==m.end())
       m[arr[i]] = 1;
      else
       m[arr[i]]+=1;
   }
   
  for(auto it = m.begin();it!=m.end();it++)
  {
    mp[it->second] = it->first;
   // while(--it->second)
   cout<<it->second<<" ";
  }
  for(auto it = mp.rbegin();it!=mp.rend();it++)
  {
   int i = it->first;
   while(i--)
     cout<<it->second<<" ";
  }
 cout<<endl;
}

int main()
{
 // int arr[] = {2,3,2,4,12,5,2,3,3,3,12};
  int arr[] = {5 ,5 ,4 ,6 ,4};
    int n = sizeof(arr)/sizeof(arr[0]);
  sortFreq(arr,n);
 return 0;
}
