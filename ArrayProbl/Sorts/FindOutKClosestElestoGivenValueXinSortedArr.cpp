#include<iostream>
using namespace std;

int binSearch(int arr[],int l,int r,int x)
{
 if( x < arr[l])
  return l;
 if(x > arr[r])
  return r;
 
 int mid = l + (r-l)/2;
 if(arr[mid] <= x && arr[mid+1] > x)
  return mid;

 if(arr[mid] > x)
  return binSearch(arr,l,mid-1,x);

 return binSearch(arr,mid+1,r,x);
}

void printClosest(int arr[],int n,int k,int x)
{
  int ind = binSearch(arr,0,n-1,x);
  int i = ind;
  int j = ind+1;int count = 0;
  if(arr[ind]==x) i--;
  while(i >= 0 && j < n && count < k)
  {
   if(x - arr[i] < arr[j] - x)
    cout<<arr[i--]<<" ";
   else
    cout<<arr[j++]<<" ";

    count++;
  }
  while(count < k && i >= 0)
   cout<<arr[i--]<<" ";

  while(count < k && j < n)
   cout<<arr[j++]<<" ";
 cout<<endl;
}

int main()
{
  int arr[] ={12, 16, 22, 30, 35, 39, 42,
                45, 48, 50, 53, 55, 56};
		   int n = sizeof(arr)/sizeof(arr[0]);
		      int x = 35, k = 4;
		         printClosest(arr, n, 4, x);
			    return 0;
}
