#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = sizeof(arr)/sizeof(arr[0]);

   int *b = arr+n;
     int *a = arr;

   b = remove_if(a,b,[] (int i) {return (i%2==1);});

  for(int *i = a;i!=b;i++)
   cout<<*i<<" ";
  cout<<endl;
  
   int arr1[] = {1,2,3,4,5,6};
   int *beg = arr1;
     int *end = arr1+sizeof(arr1)/sizeof(int);
   end = transform(beg,end,beg,[] (int i){return i*i;});
  for(int *i = beg;i!=end;i++)
   cout<<*i<<" ";
  cout<<endl;


 return 0;
 }
