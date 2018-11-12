#include<iostream>
#include<stack>
using namespace std;

int maxProf(int arr[],int n)
{
   stack<int>s;
   s.push(arr[0]);
   int profit = 0;
   for(int i = 1;i<n;i++)
   {
    if(arr[i] < s.top())
      s.push(arr[i]);
    if((arr[i] > s.top()) && (arr[i] - s.top()) > profit)
     profit = (arr[i] - s.top());
    }
  return profit;
}
int main()
{
  int arr[] = {100,180,260,310,40,535,695};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<maxProf(arr,n)<<endl;
  return 0;
 }
