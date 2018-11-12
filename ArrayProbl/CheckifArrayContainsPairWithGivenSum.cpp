#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
  for(int i = 1;i<=n;i++)
  {
   for(int j = 0;j<n-i;j++)
   {
     if(arr[j] > arr[j+1])
     {
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
    }
   }
}
}
int sumPair(int arr[],int k,int n)
{
 int l,r;
  sort(arr,n);
  l = 0;
  r = n-1;
  while(l < r)
  {
     if(arr[l]+arr[r]==k)
       return true;
    else  if(arr[l]+arr[r] < k)
       l++;
     else 
       r--;
  }
    return false;
}
int main()
{
  int arr[] =  {1, 4, 45, 6, 10, -8};
  int k = 16;
  int n = sizeof(arr)/sizeof(arr[0]);
   if (sumPair(arr,k,n))
    cout<<"The Array has Given sum pair\n";
   else
    cout<<"Array not contain Given sum pair\n";

  return 0;
}
