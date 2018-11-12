#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
  int largest = i;
  int l = 2*i + 1;
  int r = 2*i + 2;

  if(l < n&&arr[l] > arr[largest])
   largest = l;

  if(r < n&&arr[r] > arr[largest])
   largest = r;

  if(largest!=i)
  {
   swap(arr[i],arr[largest]);
   heapify(arr,n,largest);
  }
}

void heapSort(int arr[],int n)
{
  for(int i = n/2 - 1;i>=0;i--)
   heapify(arr,n,i);

  for(int i = n-1;i>=0;i--)
  {
   swap(arr[0],arr[i]);

   heapify(arr,i,0);
  }
}

int main()
{
 int arr[] = {12,5,23,7,15,9,3,8};
  int n = sizeof(arr)/sizeof(arr[0]);

cout<<"Before sort array is\n";
 for(int &i:arr)
  cout<<i<<" ";
 cout<<endl;
heapSort(arr,n);
cout<<"After sort array is\n";
 for(int &i:arr)
  cout<<i<<" ";
 cout<<endl;

 return 0;
 }
