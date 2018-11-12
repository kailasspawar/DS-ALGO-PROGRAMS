#include<iostream>
using namespace std;

int missingNumber(int arr[],int n)
{
  int sumn = 0;

  sumn = (n+1)*(n+2)/2;

 for(int i = 0;i<n;i++)
  sumn-=arr[i];

 return sumn;
}

int main()
{
 int arr[] = {1,2,5,6,7,4};
  cout<<"missing no is "<<missingNumber(arr,6)<<endl;

 return 0;
}
