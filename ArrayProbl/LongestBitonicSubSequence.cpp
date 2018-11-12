#include<iostream>
#include<algorithm>
using namespace std;
int longestBitonic(int arr[],int n)
{
  int inc[n],dec[n];
 inc[0] = 1;
      dec[n-1] = 1; 
  for(int i = 1;i<n;i++)
   inc[i] = (arr[i] <= arr[i+1]) ? inc[i-1]+1 : 1;

 for(int i = n-2;i>=0;i--)
 {
   if(arr[i] >= arr[i+1]) 
    dec[i]= dec[i+1] + 1;
   else
    dec[i] = 1;
 }
 for(int i = 0;i<n;i++)
  cout<<inc[i]<<" ";
 cout<<endl;

  int m1 = 0,m2 = 0;
  for(int i = 0;i<n;i++)
  {
   if(dec[i] > m2)
    m2 = dec[i];
   if(inc[i] > m1)
    m1 = inc[i];
  }
  return(m1+m2+1);
}


int main()
{
  int arr[] ={12, 11, 40, 5, 3, 1};   //{1, 11, 2, 10, 4, 5, 2, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
  cout<<longestBitonic(arr,n)<<endl;

  return 0;
}
