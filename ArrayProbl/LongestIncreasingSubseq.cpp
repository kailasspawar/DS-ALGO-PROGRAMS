#include<bits/stdc++.h>
using namespace std;

int lisubseq(int arr[],int n)
{
 int lis[n] = {1};

 int i ,j; 
 
 for( i = 1;i<n;i++)
   for( j = 0;j<i;j++)
     if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
       lis[i] = lis[j] + 1;

// int max = 0;
 int max = *max_element(lis,lis+n);
 return max;
}

int main()
{
  int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
     int n = sizeof(arr)/sizeof(arr[0]);

  cout<<lisubseq(arr,n)<<endl;
 return 0;
}
