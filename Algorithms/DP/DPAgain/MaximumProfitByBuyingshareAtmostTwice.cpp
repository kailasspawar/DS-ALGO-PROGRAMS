#include<iostream>
using namespace std;

int maxProfit(int price[],int n)
{
  int profit[n] = {0};
  
  int max_price = price[n-1];
  for(int i = n-2;i>=0;i--)
  {
    max_price = max(max_price,price[i]);
    profit[i] = max(profit[i+1],max_price - price[i]);
  }

  int min_price = price[0];

  for(int i = 1;i<n;i++)
  {
    min_price = min(min_price , price[i]);
    profit[i] = max(profit[i-1],profit[i] + (price[i] - min_price));
  }

  int res = profit[n-1];
 return res;
}

int main()
{
  int arr[] = {10,22,5,75,65,80};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<maxProfit(arr,n)<<endl;
 return 0;
}
