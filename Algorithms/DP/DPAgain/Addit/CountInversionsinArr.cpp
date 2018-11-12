#include<iostream>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right)
{
  int i,j,k,inv_count = 0;
  i = left;
     j = mid;
   k = left;

  while((i <= mid-1)&&(j <= right))
  {
    if(arr[i] <= arr[j])
     temp[k++] = arr[i++];
    else{
     temp[k++] = arr[j++];
     inv_count += (mid - i);
   }
  }

  while(i<=mid-1)
   temp[k++] = arr[i++];

  while(j <= right)
   temp[k++] = arr[j++];
  
  for(int i = left;i<=right;i++)
   arr[i] = temp[i];

 return inv_count;
}
int _merge(int arr[],int temp[],int left,int right)
{
  int inv_count = 0,mid;
  if(right > left)
  {
    mid = (left+right)/2;
    
    inv_count = _merge(arr,temp,left,mid);
    inv_count+=_merge(arr,temp,mid+1,right);

   inv_count+=merge(arr,temp,left,mid+1,right);
 }
return inv_count;
}
int merge1(int arr[],int n)
{
  int *temp =(int *)malloc(sizeof(int)*n);
  return _merge(arr,temp,0,n-1);
}

int main()
{
  int arr[] = {1,20,6,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"No of inversions "<<merge1(arr,n)<<endl;
  return 0;
}
