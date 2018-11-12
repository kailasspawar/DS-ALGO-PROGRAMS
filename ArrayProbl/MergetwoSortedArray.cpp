#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr[],int arr1[],int m,int n)
{
  int i ,j = 0;

  for(i = 0; i<m ; i++)
  {
   if(arr[i] == -1) 
   {
     arr[i] = arr1[j];
      j++;
   }
  }

  sort(arr,arr+m);
}

int main()
{
 int arr[] = {2, 8, -1, -1, -1, 13, -1, 15, 20};
  int arr1[] = {5, 7, 9, 25};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int k = sizeof(arr)/sizeof(arr[0]);
  merge(arr,arr1,k,n);
  for(int i = 0;i < k; i++)
   cout<<arr[i]<<" ";

  cout<<endl;
 return 0;
 }
  
