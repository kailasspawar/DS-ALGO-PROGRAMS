#include<iostream>
#include<map>
using namespace std;

bool check(int arr[],int n)
{
 map<int,int> m;
  for(int i = 0;i<n;i++)
   m[arr[i]]++;

  int mx = 0;

  for(int i = 0;i<n;i++)
   if(m[arr[i]] > mx)
    mx = m[arr[i]];

  return (mx > (n+1)/2) ? 0 : 1;
}

int main()
{
 int arr[] = {1,1,2,3,1};
  int n = sizeof(arr)/sizeof(arr[0]);

 check(arr,n) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
