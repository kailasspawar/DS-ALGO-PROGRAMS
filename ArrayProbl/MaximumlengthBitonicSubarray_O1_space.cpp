#include<iostream>
using namespace std;
int maxLenBitonic(int arr[],int n)
{
  if(n==0)
   return 0;
  int j = 0; 
   int start = 0,maxLen  = 1;
   int nextStart = 0;
   while(j < n-1)
   {
     while(j<n-1&& arr[j] <= arr[j+1])
      j++;

     while(j<n-1&&arr[j] >=arr[j+1])
     {
       
        if(j<n-1&&arr[j] >=arr[j+1])
	 nextStart=j+1;

	j++;
    }

   maxLen = max(maxLen,j-(start-1));
    start = nextStart;
  }
 return maxLen;
 }

 int main()
 {
   int A[] = {12, 4, 78, 90, 45, 23};
       int n = sizeof(A)/sizeof(A[0]);
       cout<<maxLenBitonic(A,n)<<endl;
    return 0;
 }

