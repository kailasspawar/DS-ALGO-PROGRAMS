#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int low,int high)
{

 if(high <= low)
  return (arr[low] < key) ? (low+1) : low;

 int mid = (low + high)/2;

 if(key==arr[mid])
  return mid+1;

 if(key > arr[mid])
  return binarySearch(arr,key,mid+1,high);

 return binarySearch(arr,key,low,mid-1);
}

void insertionSort(int arr[],int n)
{
 int pos,j,selected;
 for(int i = 1;i<n;++i)
 {
    j = i-1;
   selected = arr[i];
   
   pos = binarySearch(arr,selected,0,j);
  
   while(j >= pos)
   {
    arr[j+1] = arr[j];
    j--;
   }

   arr[j+1] = selected;
 }
}

int main()
{
  int arr[] = {5,8,0,3,2,1,7,4,6};
   int n = sizeof(arr)/sizeof(arr[0]);

 insertionSort(arr,n);
 for(int &i : arr)
  cout<<i<<" ";
 cout<<endl;

 return 0;
}



