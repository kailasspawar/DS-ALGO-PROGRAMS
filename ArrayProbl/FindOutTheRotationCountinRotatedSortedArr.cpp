#include<iostream>
using namespace std;
int findOutRotation(int arr[],int n)
{
  int i = 0;
 
  while(arr[i]<=arr[i+1])
   i++;

  return (i+1);
}

int main()
{
  int arr[] = {1,2,3,4,5};//{15,18,2,3,6,12};
   int n= sizeof(arr)/sizeof(arr[0]);
  cout<<findOutRotation(arr,n)<<endl;
 
 return 0;
}


