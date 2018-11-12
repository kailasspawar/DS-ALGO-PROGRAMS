#include<iostream>
#include<climits>
using namespace std;

int minRemove(int arr[],int n)
{
  int long_start = -1,long_end = 0;

  for(int start = 0;start < n;start++)
  {
    int min1 = INT_MAX,max1 = INT_MIN;

    for(int end = start;end < n;end++)
    {
      min1 = min(min1,arr[end]);
      max1 = max(max1,arr[end]);

      if(2 *min1 <= max1)
        break;

      if(end - start > long_end - long_start || 
          long_start == -1)
	  {
	    long_start = start;
	    long_end = end;
	  } 
   }
 }
  if(long_start == -1)
    return n;
 return (n - (long_end - long_start + 1));
}

int main()
{
   int arr[] = {4,5,100,9,10,11,12,15,200};
      int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minRemove(arr,n)<<endl;
   return 0;
}
