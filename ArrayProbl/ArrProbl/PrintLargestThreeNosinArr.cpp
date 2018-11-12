#include<iostream>
#include<climits>
using namespace std;

void print3Largest(int arr[] , int n)
{
  int first,second,third;
  if(n < 3)
  {
    cout<<"Arr size is Smaller\n";
    return ;
   }
 first = second = third = INT_MIN;
  for(int i = 0;i<n;i++)
  {
    if(arr[i] > first)
    {
      second = first;
      third = second;
      first = arr[i];
    }
    else if(arr[i] > second)
    {
      second = third;
      third = arr[i];
    }
    else if(arr[i] > third)
     third = arr[i];
  }
 cout<<"Largest three nos are "<<first<<" "<<second<<" "<<third<<endl;
}

int main()
{
   int arr[] = {5,3,2,6,7,9,34,21,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   print3Largest(arr,n);
  return 0;
}
