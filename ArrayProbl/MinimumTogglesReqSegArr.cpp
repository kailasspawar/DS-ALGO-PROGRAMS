#include<iostream>
using namespace std;
int toggle(int i)
{
 return (i==1) ? 0 : 1;
}
int minToggleCnt(int *arr,int n)
{
  int l = 0,r = n-1;
  int tcount = 0;
  size_t k;
  while(l < r)
  {
    if(arr[l]==1)
    {
      arr[l] = toggle(arr[l]);
      tcount++;
      l++;
    }
    else
    if(arr[r]==0)
    {
     arr[r]= toggle(arr[r]);
     tcount++;
     r--;
    }
    while(arr[l]==0)
    {
     l++;
       break;
    }
    while(arr[r]==1)
    {
     r--;
       break;
    }
    }
   return tcount;
  }

int main()
{
  int arr[] = {0 ,1 ,0 ,0 ,1 ,1 ,1};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<minToggleCnt(arr,n)<<endl;
  for(int i:arr)
   cout<<i<<" ";
  cout<<endl;
 return 0;
}



