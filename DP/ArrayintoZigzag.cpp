#include<iostream>
using namespace std;

void zigZag(int arr[],int n)
{
  for(int i = 0;i<n;i+=2)
  {
    if(i > 0&&arr[i-1] > arr[i])
     swap(arr[i-1],arr[i]);

    if(i < n-1&&arr[i+1] > arr[i])
     swap(arr[i+1],arr[i]);
  }
}

int main()
{
   int  arr[] = {4,3,7,8,6,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
   zigZag(arr,n);
//  cout<<"Array in zigzag form is :\n";
   for(int i  : arr)
    cout<<i<<" ";
   cout<<endl;
 return 0;
}
