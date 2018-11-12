#include<iostream>
using namespace std;

int max(int x,int y)
{
  return (x > y ? x : y);
}
int min(int x,int y)
{
 return (x < y ? x : y);
}
int maxProd(int arr[] , int n)
{
  int max_end_here = 1;
    int min_end_here = 1;
  int maxsofar = 1;
  for(int i = 0;i<n;i++)
  {
    if(arr[i] > 0)
    {
      max_end_here = max_end_here*arr[i];
      min_end_here = min(min_end_here * arr[i],1);
    }
    else if(arr[i]==0)
    {
     max_end_here = 1;
     min_end_here = 1;
    }

    else
    {
      int temp = max_end_here;
      max_end_here = max (min_end_here * arr[i],1);
      min_end_here = temp * arr[i];
    }
   if(maxsofar < max_end_here)
     maxsofar = max_end_here;
  }
 return maxsofar;
}

 int main()
{
  int arr[] = {1, -2, -3, 0, 7, -8, -2};
      int n = sizeof(arr)/sizeof(arr[0]);
     cout<<maxProd(arr,n)<<endl;
 return 0;
}
