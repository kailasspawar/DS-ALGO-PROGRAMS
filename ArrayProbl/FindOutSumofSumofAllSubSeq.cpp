#include<bits/stdc++.h>
using namespace std;

int sumofSum(int arr[],int n)
{
  int sum = accumulate(arr,arr+n,0);
  return sum*pow(2,n-1);
}

int main()
{
 int arr[] = {6,7,8};
   int n = sizeof(arr)/sizeof(arr[0]);
 cout<<sumofSum(arr,n)<<endl;
 return 0;
}
