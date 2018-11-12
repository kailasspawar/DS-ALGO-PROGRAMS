#include<iostream>
#include<climits>
using namespace std;

int maxCount(int arr[],int n)
{
  int count = 0,maxlen = INT_MIN;
  for(int i = 0;i<n;i++)
  {
    if(arr[i]==1)
     count++;
    else
    {
     if(maxlen < count)
      maxlen = count;

     count = 0;
   }
  if(maxlen < count)
   maxlen = count;
 }
 return maxlen;
}

int main()
{
  int arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

  cout<<maxCount(arr,n)<<endl;
 return 0;
}
