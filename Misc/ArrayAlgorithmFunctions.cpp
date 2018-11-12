#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int arr[] = {1,3,2,6,8,-2,4};
     int n = sizeof(arr)/sizeof(arr[0]);
//   returns boolean value
       all_of(arr,arr+n,[](int x) { return (x > 0) ;}) ? cout<<"All eles are +ve\n":cout<<"All eles are not +ve\n";
     
      any_of(arr,arr+n,[](int x){ return (x < 0);}) ? cout<<"There exist -ve ele\n":cout<<"there is no -ve ele\n";

      none_of(arr,arr+n,[](int x){return (x < 0);}) ? cout<<"No negative ele\n":cout<<"Negative exists\n";

   int arr1[n];
      copy_n(arr,n,arr1);
    for(int i = 0;i<n;i++)
     cout<<arr1[i]<<" ";
    cout<<endl;

   cout<<"itoa() function assigns contigious values to array\n";
int ar[6] = {0};

   iota(ar,ar+6,20);

 for(int i = 0;i<6;i++)
  cout<<ar[i]<<" ";
 cout<<endl;

 return 0;
}
