#include<iostream>
using namespace std;

void findTrip(int *arr,int n)
{
  int smaller[n];
     int greater[n];
   smaller[0] = -1;
   int max = n-1,min = 0;
   for(int i = 1;i<n;i++)
   {
     if(arr[i] <= arr[min])
     {
       min  = i;
       smaller[i] = -1;
     }
     else
      smaller[i] = min;
   }

   greater[n-1] = -1;
   for(int i = n-2;i >= 0;i--)
   {
    if(arr[i] >= arr[max])
    {
     max = i;
     greater[i] = max;
    }
    else
     greater[i] = max;
  }
  for(int i : smaller)
   cout<<i<<" ";
  cout<<endl;
  for(int i : greater)
   cout<<i<<" ";
  cout<<endl;


  for(int i = 0;i<n;i++)
  { 
   if(smaller[i] != -1 && greater[i] != -1)
   {
    cout<<arr[smaller[i]]<<" "<<arr[i]<<" "<<arr[greater[i]]<<endl;
    return ;
  }
 }
 cout<<"No such a tripplet found\n";
}
int main()
{
 
     int arr[] = {12, 11, 10, 5, 6, 2, 30};
         int n = sizeof(arr)/sizeof(arr[0]); 
	findTrip(arr,n);
return 0;
}
