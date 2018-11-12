//arr[] = {1,2,4,3,2} o/p => {(2*4*3*2),(1*4*3*2)..and so on};
#include<bits/stdc++.h>
using namespace std;
void prodArray(int arr[] , int n)
{
  int temp = 1;
  int i;
  int *prod = (int *) malloc(n*sizeof(int));
 for(i = 0;i<n;i++)
 {
   prod[i] = temp;
    temp*=arr[i];
 }

 temp = 1;
 for( i = n-1;i>=0;i--)
 {
   prod[i]*=temp;
   temp *= arr[i];
 }

 for(i = 0;i<n;i++)
  cout<<prod[i]<<" ";

 cout<<"\n";
}
int main()
{
  int arr[] = {10,3,5,6,2};
   prodArray(arr,5);
  
  return 0;
}
