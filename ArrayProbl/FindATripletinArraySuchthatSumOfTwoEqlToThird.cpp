#include<iostream>                                                
#include<algorithm>
using namespace std;   

void findTrip(int arr[],int n)
{
  sort(arr,arr+n);
  for(int i = n-1;i>=0;i--)
  {
    int j = 0;
       int k = i-1;

       while(j < k)
       {
         if(arr[i]==arr[j]+arr[k])
	 {
	   cout<<"The eles "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
	   return ;
	 }
	 else if(arr[i] > arr[j]+arr[k])
	  j++;
	 else
	  k--;
       }
  }
  cout<<"No such a Triplet Exists\n";
}

int main()
{
  int arr[] = {	5,32,1,7,10,50,19,21,2};
   int n = sizeof(arr)/sizeof(arr[0]);
  findTrip(arr,n);

  return 0;
}
