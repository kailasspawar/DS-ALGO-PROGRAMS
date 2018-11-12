#include<iostream>
using namespace std;

void reverseArr(int arr[],int s,int e)
{
 while(s < e)
 {
   swap(arr[s],arr[e]);
   s++;
   e--;
 }
}

void rotate(int arr[],int n,int d)
{
  reverseArr(arr,0,d-1);
   reverseArr(arr,d,n-1);
  reverseArr(arr,0,n-1);
}
void cyclicRot(int arr[],int n)
{
  int j = n-1;
  int backup = arr[n-1];
  for(int i = n-2;i>=0;i--)
   arr[j--] = arr[i];
  arr[0] = backup;
}

int main()
{ 
  int arr[] = {1,2,3,4,5,6,7,8};
     int n = sizeof(arr)/sizeof(arr[0]);
  // rotate(arr,n,3);
  cyclicRot(arr,n);
 for(int i :arr)
   cout<<i<<" ";
 cout<<endl;
return 0;
}
