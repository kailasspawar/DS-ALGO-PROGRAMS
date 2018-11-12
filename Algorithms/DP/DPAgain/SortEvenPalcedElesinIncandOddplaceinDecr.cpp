#include<iostream>
#include<algorithm>
using namespace std;

void sortBitonic(int arr[],int n)
{
  int i = 1,j = n-1;

  if(j % 2 != 0)
   j--;

  while(i < j)
  {
    swap(arr[i],arr[j]);
    i+=2;
    j-=2;
  }
    sort(arr,arr+(n+1)/2);
  sort(arr+(n+1)/2,arr+n,greater<int>());

}

int main()
{
  int arr[] = {6,5,3,1,4,2,9,8,0,7};
    int n  = sizeof(arr)/sizeof(arr[0]);
  sortBitonic(arr,n);
 for(int i : arr)
  cout<<i<<" ";
 cout<<endl;
 return 0;
}
