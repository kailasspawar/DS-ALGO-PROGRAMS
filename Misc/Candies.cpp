#include<iostream>
using namespace std;

int candiessum(int arr[],int n)
{
  int sum = 1,currsum=1;
 
  for(int i = 1;i<n;i++)
  {
   if(arr[i] > arr[i-1])
   {
    currsum+=1;
    sum += currsum;
    cout<<currsum<<endl;
   }
   else
   {
    currsum = 1;
    sum+=currsum;
    cout<<currsum<<endl;
   }
 }
 return sum;
}

int main()
{
 int arr[] = {2,4,2,6,1,7,8,9,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<"Sum is :"<<candiessum(arr,n)<<endl;
 return 0;
}
   
