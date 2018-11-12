#include<iostream>
using namespace std;
struct Interval 
{
  int buy;
  int sell;
};

void printProfit(int price[],int  n)
{
  Interval sol[n/2+1];
   int i = 0;
   int count = 0;
  while(i < n-1)
  {
    while(i <n-1 && price[i+1] <= price[i])
     i++;

    if(i == n-1)
     return;
    sol[count].buy = i++;

    while(i < n && price[i] >= price[i-1])
     i++;

    sol[count].sell = i-1;
    count++;
  }

  if(count == 0)
   cout<<"No such a day exixts\n";
  else
  {
   for(int i = 0;i<count;i++)
   cout<<"Buy on "<<sol[i].buy<<" "<<"Sell on "<<sol[i].sell<<endl;
  }
}

int main()
{
 int arr[] = {100,180,260,310,40,535,695};
   int n = sizeof(arr)/sizeof(arr[0]);
  printProfit(arr,n);
 return 0;
}
