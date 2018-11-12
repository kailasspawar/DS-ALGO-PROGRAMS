#include<stdlib.h>
#include<iostream>
using namespace std;

int compare(const void *a,const void *b)
{
  return (*(int *)b - *(int *)a);
}
int main()
{
  int arr[] = {88,96,4,12,43,8};
    int n = sizeof(arr)/sizeof(arr[0]);
  qsort(arr,n,sizeof(int),compare);
 cout<<"After sorting\n";
 for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";
 cout<<endl;
 return 0;
}
