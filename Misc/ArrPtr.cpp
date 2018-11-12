#include<iostream>
using namespace std;

void pr(int arr[])
{
  cout<<arr[0]<<endl;
}
void print(int arr[],int n)
{
  cout<<*(arr+3)<<endl;
  
  pr(arr+2);
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
  print(arr,n);
 return 0;
}
