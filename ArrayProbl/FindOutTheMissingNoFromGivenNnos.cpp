#include<iostream>
using namespace std;

int missingInteger(int arr[],int n)
{
  int i;
    int  x1 = arr[0];
  int  x2 = 1;
  for( i = 1;i<n;i++)
    x1= x1^arr[i];

  for( i = 2;i<=n+1;i++)
    x2 = x2^i;
 
  return (x1^x2);
}

int main()
{
  int arr[] = {1,2,4,5,6};
    int k = missingInteger(arr,5);
  cout<<"missing no is"<<k<<endl;

  return 0;
}
