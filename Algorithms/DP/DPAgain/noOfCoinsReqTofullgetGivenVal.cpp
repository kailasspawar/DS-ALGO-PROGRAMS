#include<iostream>
#include<string.h>
#include<climits>
using namespace std;

int minCoins(int arr[],int m,int n)
{
  int table[n+1];
  table[0] = 0;

 for(int i = 1;i<=n;i++)
  table[i] = INT_MAX;

 for(int i = 1;i<=n;i++)
 {
   for(int j = 0;j<m;j++)
    if(arr[j] <= i)
    {
     int sub_res = table[i-arr[j]];
     if(sub_res != INT_MAX && sub_res + 1 < table[i])
      table[i] = sub_res + 1;
    }
 }
return table[n];
}

int main()
{
  int arr[] = { 9,6,5,1};
    int m = sizeof(arr)/sizeof(arr[0]);
   int n = 11;
  cout<<"No of coins req : "<<minCoins(arr,m,n)<<endl;
 return 0;
}
