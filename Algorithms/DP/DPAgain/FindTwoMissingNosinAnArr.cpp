#include<iostream>
using namespace std;

void findMissing(int arr[],int n)
{
  int XOR = arr[0];
  for(int i = 1;i<n-2;i++)
   XOR^=arr[i];

  for(int i = 1;i<=n;i++)
   XOR^=i;

   int x = 0,y = 0;

  int set_bit_no = XOR & ~(XOR-1);
   for(int i = 0;i<n-2;i++)
   {
     if(arr[i] & set_bit_no)
      x = x^arr[i];
     else
      y = y^=arr[i];
   }

   for(int i = 1;i<=n;i++)
   {
     if(i & set_bit_no)
      x = x^i;
     else
      y = y^i;
   }
 cout<<"Two missing nos are "<<x<<" "<<y<<endl;
}

int main()
{
  int arr[] = {1,3,5,6};
     int n = 6;
  findMissing(arr,n);
 return 0;
}
