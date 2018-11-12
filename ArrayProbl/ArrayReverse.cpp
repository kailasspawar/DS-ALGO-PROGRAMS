#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int* arrayrev(int arr[],int n)
{
int i = 0;
 int *arr1 = (int *)malloc(n*sizeof(int));
 while(n >= 0)
 { 
   arr1[i++]=arr[n];
    n--;
 }
 
 return arr1;
}
void changearray(int arr[],int n)
{
 int start = 0,end = n-1;
 while(start < end)
 {
  swap(arr[start],arr[end]);
  start++;
  end--;
 }
}
int main()
{
  int arr[] = {0,5,7,3,2,1,6,4};
  
//  arrayrev(arr,7);
 for(int i = 0;i<8;i++)
  cout<<arr[i]<<" ";
cout<<endl;
int *arr1;
 arr1 = arrayrev(arr,7);
 for(int i = 0;i<8;i++)
  cout<<arr1[i]<<" ";
cout<<endl;
 changearray(arr,8);
 for(int i = 0;i<8;i++)
  cout<<arr[i]<<" ";
cout<<endl;

 return 0;
}
