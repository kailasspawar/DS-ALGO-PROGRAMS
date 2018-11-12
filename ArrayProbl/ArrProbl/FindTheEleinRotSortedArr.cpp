#include<iostream>
using namespace std;
int binSearch(int arr[],int l,int r,int ele)
{
  cout<<l<<" "<<r<<endl;
   if(l > r)
     return -1;

    int mid = (l+r) / 2;

    if(arr[mid] == ele)
     return mid ;

    if(arr [mid] < ele)
     return binSearch(arr,(mid+1),r,ele);
    return binSearch(arr,l,(mid-1),ele);
}
   
int searchEle(int arr[],int n,int ele)
{
  int i;
  for(i = 0;i <n-1;i++)
   if(arr[i] > arr[i+1]) 
    break;

  cout<<i<<endl;
  if(arr[i] == ele)
   return i;

   if(arr[0] > ele)
    return binSearch(arr,i+1,n-1,ele);
 return  binSearch(arr,0,i-1,ele);
}

int main()
{
  int arr[] = {4,5,6,7,1,2,3};
     int n = sizeof(arr)/sizeof(arr[0]);
     cout<<binSearch(arr,4,6,3)<<endl;
//   searchEle(arr,n,3) < 0 ? cout<<"ele not found\n" :
                        cout<<"Found at "<<searchEle(arr,n,3)<<endl;
 return 0;
}
