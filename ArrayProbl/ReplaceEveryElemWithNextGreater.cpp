#include<iostream>
using namespace std;

void replaceEveryEleWGr(int arr[],int n)
{
  int max,backup;
  max = arr[n-1];
    arr[n-1] = -1;
 for(int i = n-2;i>=0;i--)
 {
   backup = arr[i];
    arr[i] = max;
   if(max < backup)
    max = backup;
 }

 for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";
 cout<<endl;
}

int main()
{
 int arr[] = {16,17,4,3,5,2};
   int n = sizeof(arr)/sizeof(arr[0]);
  replaceEveryEleWGr(arr,n);

 return 0;
}
