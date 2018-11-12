#include<iostream>
using namespace std;

struct pairr
{
 int x,y;
};

struct pairr findTwomiss(int arr[],int n)
{
  int XOR  = arr[0];
  struct pairr xy;
  xy.x = 0,xy.y = 0;
  for(int i = 1;i<n-2;i++)
   XOR^=arr[i];

  for(int i = 1;i<=n;i++)
   XOR^=i;

  int set_bit = XOR & ~(XOR-1);
  for(int i = 0;i<n-2;i++)
  {
   if(arr[i] & set_bit)
    xy.x^=arr[i];
   else
    xy.y^=arr[i];
  }
  for(int i = 1;i<=n;i++)
  {
   if(i & set_bit)
    xy.x^=i;
   else
    xy.y^=i;
  }
 return xy;
}

int main()
{
  int arr[] = {1,5,3,6};
    int n = 6;
  struct pairr r = findTwomiss(arr,n);
 cout<<r.x<<" "<<r.y<<endl;
return  0;
}
