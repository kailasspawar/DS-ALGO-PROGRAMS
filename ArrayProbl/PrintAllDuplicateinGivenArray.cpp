#include<iostream>
using namespace std;

void printDuplicate(int arr[],int n)
{
   int i ;
 
   for(i = 0;i<n;i++)
   {
    int index = arr[i]%n;
    arr[index]+=n;
   }

   for(i = 0;i < n;i++)
    if(arr[i]/n > 1)
     cout<<i<<" ";

  cout<<"\n";
}

int main()
{
   int arr[] = {11,33,11,2,33,66,66};
    int n = sizeof(arr)/sizeof(arr[0]);

    printDuplicate(arr,n);

  return 0;
}
