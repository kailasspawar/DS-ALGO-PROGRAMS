#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//using naive approach
int pairsum(int arr1[],int arr[],int n,int m,int sum)
{
 int i ,count = 0;
 for(i=0;i<n;i++)
 {
  for(int j = 0;j<m;j++)
  {
    if(arr1[i]+arr[j] == sum){
     cout<<"("<<arr1[i]<<","<<arr[j]<<")"<<" ";
     count++;
  }
  }
 }
 cout<<endl;
 return count;
}
//Using binary search
int pairSum(int arr[],int arr1[],int m,int n,int x)
{
  int count= 0;
  for(int i = 0;i<m;i++)
  {
    if(binary_search(arr1,arr1+n,x-arr[i]))
      count++;
  }
 return count;
}
//Using two pointers
int Pairsum(int arr[],int arr1[],int m,int n,int x)
{
  int i = 0, j = n-1;
  int count = 0;
  while(i < m && j >= 0)
  {
    if((arr[i]+arr1[j]) == x)
    {
      count++;
        i++;
        j--;
    }
   else if((arr[i]+arr1[j]) < x)
    i++;
   else
    j--;
  
 }
 return count;
}
int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 7, 11} ;
   int arr[] = {2, 3, 4, 5, 6, 8, 12} ;
  int n , m;  
  n=m=7;
 cout<<pairsum(arr1,arr,7,7,9)<<endl;
  cout<<pairSum(arr1,arr,7,7,9)<<endl;
  cout<<Pairsum(arr1,arr,7,7,9)<<endl;
 
 return 0;
}
