#include<iostream>
#include<climits>
#include<queue>
using namespace std;
queue<int>Q;
int maxSum(int arr[],int n)
{
 int max = 0;
   int maxsofar = INT_MIN;
  for(int i = 0;i<n;i++)
  {
   max += arr[i];
    if(max > maxsofar)
    {
       maxsofar = max;
       Q.push(arr[i]);
    }
    if(max < 0)
     max = 0;
  }

  return maxsofar;
}

int main()
{
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int n = sizeof(arr)/sizeof(arr[0]);

 cout<<"max sum subarray "<<maxSum(arr,n)<<endl;
 for(int i = 0;i<Q.size();i++)
 {
   cout<<Q.front()<<" ";
    Q.pop();
 }
 return 0;
}
