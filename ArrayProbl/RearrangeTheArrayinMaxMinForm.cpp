#include<iostream>
#include<vector>
using namespace std;
 void reArrange(int arr[],int n)
 {
   int i = 0,j = n-1;
   vector<int>v;
   while( i < j)
   {
      v.push_back(arr[j]);
      v.push_back(arr[i]);
       i++;j--;
   }
 
  if(n%2!=0)
    v.push_back(arr[i]);
 int l = 0;
  for(int&k: v)
   arr[l++]=k;

 }
int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = sizeof(arr)/sizeof(arr[0]);
  for(int&k: arr)
   cout<<k<<" ";
  cout<<endl;
  reArrange(arr,n);
  for(int&k: arr)
   cout<<k<<" ";
  cout<<endl;
  
 return 0;
 }

  

