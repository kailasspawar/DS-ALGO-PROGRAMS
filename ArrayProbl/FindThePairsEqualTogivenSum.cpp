#include<iostream>
using namespace std;

void findPairs(int arr[],int n,int sum)
{
  int binmap[10000] = {0};
  int temp;
  for(int i = 0;i<n;i++)
  {
    temp = sum - arr[i];
    if(temp >= 0 && binmap[temp]==1)
       cout<<"("<<arr[i]<<","<<temp<<")"<<endl;
    binmap[arr[i]]= 1;

  }
}
int main()
{
  int A[] = {1, 4, 45, 6, 10, 8};
      int n = 16;
          int arr_size = sizeof(A)/sizeof(A[0]);
	   
	       findPairs(A, arr_size, n);
	        
		        return 0;
}
