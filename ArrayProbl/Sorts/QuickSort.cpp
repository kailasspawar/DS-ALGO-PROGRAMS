#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
  int i = (low-1);
  int pivot = arr[high];
  for(int j = low;j<=high-1;j++)
  {
     if(arr[j] <= pivot)
     {
      i++;
       swap(arr[i],arr[j]);
     }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}

void quickSort(int arr[],int low,int high)
{
 
 if(low < high)
 {
   int pi = partition(arr,low,high);

  quickSort(arr,low,pi-1);
   
    quickSort(arr,pi+1,high);
 }
}

int main()
{
  int arr[] = {7,3,2,1,12,76,5,23,11,32};
   int n = sizeof(arr)/sizeof(arr[0]);
  quickSort(arr,0,n-1);

  for(int &i : arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
}
  
    