#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end)
{
 while (start < end)
 {
   swap(arr[start],arr[end]);
   start++;
   end--;
 }
}
void leftRoate(int arr[],int d,int n)
{
  reverseArray(arr,0,d-1);
  reverseArray(arr,d,n-1);
  reverseArray(arr,0,n-1);
}

void printArray(int arr[],int d,int n)
{
  leftRoate(arr,d,n);
   for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
   printArray(arr,d,n);
 return 0;
}
  
