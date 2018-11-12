#include<iostream>
using namespace std;
int bitonic(int arr[],int n)
{
  int arr1[n];
  int inc[n],dec[n];
  inc[0] = 1;
  dec[n-1] = 1;
  for(int i = 1;i<n;i++)
   inc[i] = (arr[i-1] <= arr[i]) ? inc[i-1]+1 : 1;

  for(int i = n-2;i>=0;i--)
   dec[i]  = (arr[i] >= arr[i+1]) ? dec[i+1]+1 : 1;
 int max;
  max = inc[0] + dec[0] -1;

  for(int i = 0;i<n;i++)
   if(inc[i]+dec[i] - 1 > max)
    max = dec[i] + inc[i] -1;

  return max;
 }

int main()
{
 
     int arr[] = {12, 4, 78, 90, 45, 23};
         int n = sizeof(arr)/sizeof(arr[0]);
	              cout<<bitonic(arr, n)<<endl;
			     return 0;
}
