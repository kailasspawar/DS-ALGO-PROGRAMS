#include<bits/stdc++.h>
using namespace std;

void segregate(int arr[],int n)
{
  int left = 0,right = n-1;

  while( left < right )
  {
    while(arr[left]%2==0&&left < right)
      left++;
 
    while(arr[right]%2==1&&right > left)
     right--;

    if(left < right)
     swap(arr[left],arr[right]);

  }
 for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";

 cout<<"\n";
}

int main()
{
  int arr[] = {1,4,3,2,7,4,3,2,8,9};
   int n = sizeof(arr)/sizeof(arr[0]);
  segregate(arr,n);
 
 return 0;
}
