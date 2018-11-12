#include<iostream>
#include<climits>
using namespace std;

int main()
{
  int arr[] = {5,3,7,2,1,10,11,32,12,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int max = INT_MIN,min = INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(max < arr[i])
     max = arr[i];
    if(min > arr[i])
     min = arr[i];
  }

 cout<<"Min is :"<<min<<endl;
 cout<<"Max is :"<<max<<endl;

 return 0;
}
