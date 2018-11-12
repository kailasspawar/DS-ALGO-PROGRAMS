#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
 if(p1.second == p2.second)
  return p1.first > p2.first;
  
 return p1.second > p2.second;
}
void printFreqwise(int arr[] ,int n,int k)
{
  unordered_map<int,int>um;

  for(int i = 0;i<n;i++)
   um[arr[i]]+=1;

   vector<pair<int,int> >vec(um.begin(),um.end());

   sort(vec.begin(),vec.end(),compare);
   
   for(int i = 0;i < k;i++)
    cout<<vec[i].first<<" ";
   cout<<endl;
}

int main()
{
   int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
   printFreqwise(arr,n,k);
 return 0;
}
