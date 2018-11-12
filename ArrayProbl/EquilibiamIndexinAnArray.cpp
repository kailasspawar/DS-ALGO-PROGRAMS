#include<iostream>
using namespace std;
bool checkEql(int arr[],int n,int ind)
{
  int i,suml = 0,sumr = 0;
  for(i = 0;i < ind;i++)
   suml+=arr[i];

  for(i = ind+1;i<n;i++)
   sumr+=arr[i];

  return (suml==sumr);
}
 
void printEql(int arr[],int n)
{
  for(int i = 0;i<n;i++)
   if(checkEql(arr,n,i))
    cout<<i<<" ";
}

int main()
{
  int arr[]= {-7, 1, 5, 2, -4, 3, 0};
   int n = sizeof(arr)/sizeof(arr[0]);
  
  printEql(arr,n);

  return 0;
}
