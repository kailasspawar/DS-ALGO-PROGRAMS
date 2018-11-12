#include<iostream>
using namespace std;

struct Temple
{
 int L ;
   int R;
};

int maxOffering(int n,int temple[])
{
  Temple chainSize[n];
  for(int i = 0;i<n;i++)
  {
   chainSize[i].L = -1;
   chainSize[i].R = -1;
  }
  chainSize[0].L = 1;
  chainSize[n-1].R = 1;
  for(int i = 1;i<n;i++)
  {
    if(temple[i-1] < temple[i])
     chainSize[i].L = chainSize[i-1].L + 1;
    else
     chainSize[i].L = 1;
  }

  for(int i = n-2;i>=0;i--)
  {
    if(temple[i+1] < temple[i])
     chainSize[i].R = chainSize[i+1].R + 1;
    else
     chainSize[i].R = 1;
  }

  int sum = 0;
  for(int i = 0;i<n;i++)
   sum+=max(chainSize[i].L,chainSize[i].R);

 return sum;
}

int main()
{
  int arr[] = {1,4,3,6,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<maxOffering(n,arr)<<endl;
  return 0;
}
