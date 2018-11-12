#include<iostream>
using namespace std;

void convertArr(int arr[],int n)
{
 int i = 0;
 bool flag = true;
 while(i <= n-2)
 {
   if(flag)
   {
    if(arr[i] > arr[i+1])
    {
     swap(arr[i],arr[i+1]);
     i++;
    }
  }
   else
    { 
     if(arr[i] < arr[i+1])
      swap(arr[i],arr[i+1]);
    i++;     
 }
 flag = !flag;
}
}

int main()
{
  int arr[] = {4, 3, 7, 8, 6, 2, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
  convertArr(arr,n);
  for(int &i:arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
}
