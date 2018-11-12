#include<iostream>
#include<climits>
using namespace std;
void change(int arr[],int start,int n)
{
 static int j = 0;
 int min = INT_MAX;
  int ind;
 for(int i = start;i<n;i++)
 {
  if(arr[i] < min)
  {
   min = arr[i];
   ind  = i;
  }
 }
 swap(arr[j++],arr[ind]);
// cout<<ind<<endl;
// return ind;
}

void selectionSort(int arr[],int n,int start)
{
 for(int i = 0;i<n-1;i++)
   change(arr,i,n); 
}

int main()
{
  int arr[] = {5,2,4,8,9,3,1};
   int n = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr,n,0);
  for(int &x: arr)
   cout<<x<<" ";
  cout<<endl;
 return 0;
}
