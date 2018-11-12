#include<iostream>
#include<algorithm>
using namespace std;

int *rearrange(int arr[],int n)
{
  int temp[n];
  int i = 0,j = n-1;
  int k = 0;
  while(i <= j)
  { 
    if(k % 2==0)
     temp[k++] = arr[j--];
    else
     temp[k++] = arr[i++];
  }
 copy(temp,temp+n,arr);
 return arr;
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7};
     int n = sizeof(arr)/sizeof(arr[0]);
  int *arr1 = new int[n];
  arr1 = rearrange(arr,n);
  for(int i = 0;i<n;i++)
   cout<<arr1[i]<<" ";
 cout<<endl;
return 0;
}
