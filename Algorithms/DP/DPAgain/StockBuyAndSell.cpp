#include<iostream>
using namespace std;
struct Interval
{
  int buy,sell;
};
void stockBuyAndSell(int price[],int n)
{
  if(n==1)
    return ;
  int count = 0;
  int i = 0;
  Interval sol[n/2+1];
 while(i < n-1)
 {
   while(i < n-1 && price[i+1] <= price[i])
    i++;

   if(i == n-1)
    break;
   
   sol[count].buy = i++;
   while(i < n && price[i] >= price[i-1])
    i++;
   
   sol[count].sell = i-1;
  count++;
}
 if(count == 0) 
  cout<<"No profit possible\n" ;
 else
 {
  for(int i = 0;i<count;i++)
   cout<<"buy on day "<<sol[i].buy<<" "<<"sell on day "<<sol[i].sell<<endl;
 }
 return ;
}

int main()
{
  int arr[] = {100,180,260,310,40,535,695};
 //  int arr[] = {10,22,5,75,65,80};   
   int n = sizeof(arr)/sizeof(arr[0]);
   stockBuyAndSell(arr,n);
  return 0;
}

 

