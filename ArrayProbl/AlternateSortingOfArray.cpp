#include<iostream>
#include<algorithm>

// i/p = {7,1,2,3,4,5,6} 0/p= > 7,1,6,2,5,3,4
using namespace std;
void alternatesort(int arr[],int n)
{
  sort(arr,arr+n);
 
  int i = 0,j=n-1;

  while( i < j)
  {
   cout<<arr[j]<<" ";
   cout<<arr[i]<<" ";
    i++;j--;
  }
 if(n%2!=0)
  cout<<arr[i];
 
}

int main()
{
 int arr[] = {7, 1, 2, 3, 4, 5, 6};
  int n = sizeof(arr)/sizeof(arr[0]);
 alternatesort(arr,n);
//  for(int&i :arr)
//   cout<<i<<" ";
 cout<<endl;
 return 0;
 }
