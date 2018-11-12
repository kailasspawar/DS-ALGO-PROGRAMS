#include<iostream>
#include<string.h>
using namespace std;

int maxProfit(int arr[],int n)
{
  int *profit = (int *)malloc(sizeof(int)*n);

  memset(profit,0,sizeof(profit));
 int max_price = arr[n-1];
  for(int i = n-2;i>=0;i--)
  {
    max_price = max(max_price,arr[i]);

    profit[i] = max(profit[i+1],max_price - arr[i]);
  }

  int min_price = arr[0];

  for(int i = 1;i<n;i++)
  {
    min_price = min(min_price,arr[i]);

    profit[i] = max(profit[i-1],profit[i] + arr[i]-min_price);
  }
 return profit[n-1];
 delete [] profit;
}

int main()
{
   int arr[] = {10,22,5,75,65,80};
      int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Max profit is "<<maxProfit(arr,n)<<endl;
  return 0;
}
