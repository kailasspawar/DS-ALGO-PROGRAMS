#include<iostream>
using namespace std;

bool binarySearch(int arr[],int l,int h,int n)
{
  while(l<=h)
  {
    int mid = l+(h-1)/2;
  
    if(mid == n)
     return true;
    else if(mid > n)
     return binarySearch(arr,l,mid-1,n);
    else
      return binarySearch(arr,mid+1,h,n);

 }
 return false;
}

int main()
{
 int arr[] = {2,5,7,3,1,6,9,4,3,11};

 int n = sizeof(arr)/sizeof(arr[0]);
 if(binarySearch(arr,0,n-1,9))
  cout<<"ele is Present"<<endl;
 else
  cout<<"ele is Not Present"<<endl;

 return 0;
}
  
