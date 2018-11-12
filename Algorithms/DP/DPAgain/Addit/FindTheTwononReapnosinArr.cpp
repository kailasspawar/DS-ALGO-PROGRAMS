#include<iostream>
using namespace std;

void findTwononRep(int arr[],int n)
{
  int xOr = arr[0];
  for(int i = 1;i<n;i++)
   xOr^=arr[i];
  
  int set_bit = xOr & ~(xOr-1);
  int x = 0,y = 0;
  for(int i = 0;i<n;i++)
  {
    if(set_bit & arr[i])
    {
     x^=arr[i];
     cout<<"x = "<<x<<endl;
    }
    else
    {
     y^=arr[i];
     cout<<"y = "<<y<<endl;
    }
  }
 cout<<"Two non rep eles "<<x<<" "<<y<<endl;
 }

int main()
{
  int arr[] = {2,5,3,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
  findTwononRep(arr,n);
 return 0;
}
