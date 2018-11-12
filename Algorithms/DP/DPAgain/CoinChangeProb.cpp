#include<iostream>
using namespace std;

int contWays(int s[],int m,int n)
{
  int table[n+1] = {0};
  table[0] = 1;
  for(int i = 0;i<m;i++)
   for(int j = s[i];j<=n;j++)
    table[j] += table[j-s[i]];

  return table[n];
}

int main()
{
  int arr[] = {1,2,3};
     int n = sizeof(arr)/sizeof(arr[0]);
   int m = 4;
 cout<<contWays(arr,n,m)<<endl;
 return 0;
}
    
