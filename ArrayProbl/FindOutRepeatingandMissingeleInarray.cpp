//arr[] = {3,1,3}  = rep = 1,miss = 2
#include<bits/stdc++.h>
using namespace std;
void missingrep(int arr[],int n)
{
  int i ;
  
  sort(arr,arr+n); 
  for(i = 1;i<=n;i++)
  {
    if(arr[i-1]!=i)
     cout<<i<<" ";
     
    if(arr[i-1]==arr[i])
     cout<<arr[i]<<endl;
  }
}
//Using count array ..........// in O(n)
void miss(int arr[],int n)
{
  int *count = (int *)malloc(sizeof(int)*n);
  memset(count,0,n);
  for(int i = 0;i<n;i++)
  {
    if(count[arr[i]]==0)
      count[arr[i]]++;

    if(count[arr[i]] == 1)
      cout<<arr[i]<<" ";
   cout<<endl;
  }
  for(int i = 0;i<n;i++)
    cout<<count[i]<<" ";
 cout<<endl;
}
     
int main()
{
  int arr[] = {3,1,3};
  int n = sizeof(arr)/sizeof(arr[0]);

//  missingrep(arr,n);
    miss(arr,n);
 return 0;
}
   
