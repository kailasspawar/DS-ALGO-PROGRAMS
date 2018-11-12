/*
Input: arr[]  = {1, 3, 0, 2};
Output: arr[] = {2, 0, 3, 1};
Explanation for the above output.
Since arr[0] is 1, arr[1] is changed to 0
Since arr[1] is 3, arr[3] is changed to 1
Since arr[2] is 0, arr[0] is changed to 2
Since arr[3] is 2, arr[2] is changed to 3
*/
#include<iostream>
using namespace std;

void rearrange(int arr[],int n)
{
 int i,j;
 int ar[n];
 for(i = 0;i<n;i++)
 {
  ar[arr[i]] = i;
 }
 for(int &x:ar)
  cout<<x<<" ";
 cout<<endl;
}

int main()
{
 int arr[] = {1,3,0,2};
  int n = sizeof(arr)/sizeof(arr[0]);
 rearrange(arr,n);
 return 0;
}

                                      
