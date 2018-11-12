//the inversion is if a[i] > a[j] while i < j
#include<bits/stdc++.h>
using namespace std;

int inversions(int arr[],int n)
{
  int i = 0,count = 0;
  while(i < n)
  {
    int j = n-1;
    while(j>i)
    {
     if(arr[i] > arr[j])
     { 
      count++;
  //    cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
     }
     j--;
    }
   i++;
  }
 return count;
 }

 int main()
{
  int arr[] = {2, 4, 1, 3, 5};
   cout<<inversions(arr,5)<<endl;
  return 0;
}
