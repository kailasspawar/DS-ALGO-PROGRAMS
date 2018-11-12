#include<iostream>
#include<stdlib.h>
using namespace std;

bool check(int arr[],int n,int a,int b)
{
 int range =  b - a;

 for(int i = 0;i<n;i++)
 {
   if(abs(arr[i]) >= a && abs(arr[i]) <= b)
   {
     int z = abs(arr[i])-a;
     if(arr[z] > 0)
      arr[z] = arr[z] * -1;
   }
 }
 int count = 0;
 for(int i = 0;i<=range&&i<n;i++)
  if(arr[i] > 0)
   return false;
  else
   count++;
 
 return (count == range+1);
}

int main()
{
 int arr[] = {1,5,7,3,2,4,9,8,7};
   int n = sizeof(arr)/sizeof(arr[0]);

  (check(arr,n,2,5)) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
