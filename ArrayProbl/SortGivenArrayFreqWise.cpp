#include<bits/stdc++.h>
using namespace std;
void printarrfreq(int arr[],int n)
{
  int i=0 ,j ;
    int count = 0;
  while(i < n)
  {
   for(j = n-1; j>i+1;j--)
    {
    if(arr[i] == arr[j])
     {
       count++;
       swap(arr[i+1],arr[j]);
      }
    }
     i+=count;
  }
}
int main()
{
  int arr[] = {2, 5, 2, 8, 5, 6, 8, 8,10,2,10,0,0,0,0,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  printarrfreq(arr,n);
 
  for(int i = 0;i<n;i++)
   cout<<arr[i]<<" ";

  cout<<endl;
  return 0;
}
