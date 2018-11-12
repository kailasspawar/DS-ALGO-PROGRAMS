#include<iostream>
#include<stdlib.h>
using namespace std;

void prodArr(int arr[],int n)
{
  int temp = 1;
  int prod[n];
  for(int i = 0;i<n;i++)
   prod[i] = 1;
  for(int i = 0;i<n;i++)
  {
    prod[i] = temp;
    temp*=arr[i];
  }
  temp = 1;

  for(int i = n-1;i>=0;i--)
  {
    prod[i]*=temp;
    temp*=arr[i];
  }

 for(int i : prod)
  cout<<i<<" ";
 cout<<endl;
}

int main()
{
  int arr[] = {10,3,5,6,2};
     int n = sizeof(arr)/sizeof(arr[0]);
   prodArr(arr,n);
  return 0;
}
