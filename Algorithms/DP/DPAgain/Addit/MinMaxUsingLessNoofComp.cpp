#include<iostream>
using namespace std;

struct pairr
{
  int min;
   int max;
};

struct pairr findMinMax(int arr[],int n)
{
  struct pairr minmax;
  int i = 0;
  if(n % 2 == 0)
  {
   if(arr[0] > arr[1])
   {
    minmax.max = arr[0]; 
      minmax.min = arr[1];
   }
   else
   {
    minmax.max = arr[1];
    minmax.min = arr[0];;
   }
   i+=2;
  }
  else
  {
    minmax.max = arr[0];
       minmax.min= arr[0];
       i = 1;
  }

  while( i < n-1)
  {
     if(arr[i] > arr[i+1])
     {
       minmax.max = max(arr[i],minmax.max);
       minmax.min = min(arr[i+1],minmax.min);
     }
     else
     {
       minmax.max = max(arr[i+1],minmax.max);
       minmax.min = min(arr[i],minmax.min);
     }
    i+=2;
  }
 return minmax;
}

int main()
{
   int arr[] = {4,6,2,1,4,8,9,3};
     int n = sizeof(arr)/sizeof(arr[0]);
   struct pairr minmax = findMinMax(arr,n);
  cout<<"Max is "<<minmax.max<<" "<<"min is "<<minmax.min<<endl;
 return 0;
}




  




