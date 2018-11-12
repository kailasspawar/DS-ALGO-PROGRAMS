#include<iostream>
using namespace std;
void rotate(int arr[],int n,int d)
{
  if(d==0)
   return;

  int temp = arr[0];
 for(int i = 0;i<n;i++)
   arr[i] = arr[i+1];

     arr[n-1] = temp;
  rotate(arr,n,d-1);
}

int main()
{
 int arr[] = {1,2,3,4,5,6,7};

 int n = sizeof(arr)/sizeof(arr[0]);
 rotate(arr,n,2);
 for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";
cout<<endl;
 return 0;
} 
