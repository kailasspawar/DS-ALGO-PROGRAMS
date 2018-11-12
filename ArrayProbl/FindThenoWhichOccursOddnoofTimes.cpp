#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int oddnoofOccuur(int arr[],int n)
{
  int ele = arr[0];

 for(int i = 1;i<n;i++)
  ele^=arr[i];

 return ele;
}
int main()
{
 int arr[] = {1,2,3,1,2,4,5,4,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);
 for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";
cout<<endl;
 vector<int>V(arr,arr+n);
 cout<<oddnoofOccuur(arr,n)<<" Occurs odd noof times\n";
 sort(V.begin(),V.end());
 vector<int>::iterator it;
 for(it = V.begin();it<V.end();it++)
  cout<<*it<<" ";

 cout<<endl;
  return 0;
}
