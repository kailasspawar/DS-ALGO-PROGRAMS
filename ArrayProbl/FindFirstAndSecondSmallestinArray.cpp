#include<iostream>
#include<climits>
using namespace std;
void printFirstandSec(int arr[],int n)
{
  int first,second;

  if(n < 2)
  {
   cout<<"there is no two smallest elements"<<endl;
    return;
  }
 
  first = second = INT_MAX;
 for(int i = 0;i < n;i++)
 {
   if(arr[i] < first)
   {
     second = first;
     first = arr[i];
   }
  else
   if(arr[i] < second && arr[i]!=first)
    second = arr[i];
 }
  if(second == INT_MAX)
   cout<<"there is no second smallest ele"<<endl;
  else
   cout<<first<<" "<<second<<endl;
 }

int main()
{
 int arr[] = {12, 13, 1, 10, 34, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  
   printFirstandSec(arr,n);
 return 0;
}
