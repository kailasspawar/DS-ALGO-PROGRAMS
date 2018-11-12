#include<iostream>
#include<algorithm>
using namespace std;
void segregate(int arr[],int n)
{
  int i = -1;
  for(int j = 0;j<n;j++)
  {
    if(arr[j]%2 == 0)
    {
      i++;
      swap(arr[j],arr[i]);
    }
      
  }
}
//
// by using another approach 
  // take two indices as left , right and traverse through the array
  //when we get untill the odd on left side and even on right side 
 //and then exchange the two elements

void interchange(int arr[],int n)
{
  int l = 0, r = n-1;
  while( l < r)
  {
    while(l < r&&arr[l]%2==0)
     l++;
    while(l < r&&arr[r]%2==1)
     r--;

    if(l < r)
    {
     swap(arr[l],arr[r]);
     l++;
     r--;
    }
  }
}
int main(){
 // int arr[] = {12,45,2,17,21,43,20,34};
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
   segregate(arr,n);
  for(int&i:arr)
   cout<<i<<" ";
  cout<<endl;
 
  interchange(arr,n);
  for(int&i:arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
}
