#include<iostream>
#include<map>
using namespace std;

void sortAccor(int arr[],int n,int x)
{
 map<int,int>m;
  for(int i = 0;i<n;i++)
   m[arr[i]] = abs(x-arr[i]);

  for(auto it = m.begin();it != m.end();it++)
   cout<<it->second<<" ";
  cout<<endl;
}
int main()
{
  int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
   sortAccor(arr,n,6);
  return 0;
}
