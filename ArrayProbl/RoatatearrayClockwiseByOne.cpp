#include<iostream>
using namespace std;

void rotate(int arr[],int n)
{
  int temp=arr[0];
  for(int i=0;i<n;i++) 
   arr[i]=arr[i+1];
 
  arr[n-1] = temp;

  for(int i = 0;i<n;i++)
   cout<<arr[i]<<" ";
 cout<<endl;
}
int main()
{ 
 int i;
  int arr[] = {1,2,3,4 ,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"before rotation the array is\n";
  for( i =0;i<n;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
  cout<<"array after rotation\n";
  rotate(arr,n);
 
  cout<<i<<endl;
 return 0;
}
