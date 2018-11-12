#include<iostream>
using namespace std;

void segregate(int arr[],int n)
{
  int i = 0 ,j = n-1;
  while(i < j)
  {
    if(arr[i] ==  1)
    {
     while(j > i && arr[j]!=0)
      j--;
     swap(arr[i],arr[j]);
    }
   else 
    i++;
  }
}
int main()
{
  int arr[] = {1,0,1,1,0,0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
   segregate(arr,n);
   for(int i:arr)
    cout<<i<<" ";
   cout<<endl;
  return 0;
}
