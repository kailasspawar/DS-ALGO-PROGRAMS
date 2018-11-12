#include<iostream>
using namespace std;

int maxLen(int arr[],int n)
{
  int maxlen = 0;
  for(int i = 0;i<n-1;i++)
  {
    int sum=0,count0=0,count1=0;
    if(arr[i]==0)
    {
       count0 = 1,count1 = 0;
       sum = 1;
    }
    else
    {
       count1 = 1,count0 = 0;
        sum = 1;
    }

   for(int j = i+1;j<n;j++)
   {
     if(arr[j]==0)
      count0++;
     else
      count1++;

     if(count1==count0)
       sum = count0+count1;
   }
  cout<<sum<<" ";
   if(sum > maxlen)
     maxlen = sum;
 }

 return maxlen;
}
int main()
{
  int arr[]= {1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<maxLen(arr,n)<<endl;

 return 0;
}

