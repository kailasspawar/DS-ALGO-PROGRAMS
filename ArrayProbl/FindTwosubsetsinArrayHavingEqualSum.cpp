#include<iostream>
#include<algorithm>
using namespace std;
void partition(int arr[],int n)
{
  int sumleft[n];
   int sumright[n];
  sort(arr,arr+n);
  sumleft[0] = arr[0];
    sumright[n-1] = arr[n-1];
   for(int i = 1;i<n;i++)
     sumleft[i] = (sumleft[i-1]+arr[i]);

   for(int i = n-2;i>=0;i--)
     sumright[i] = sumright[i+1]+arr[i];

   for(int i = 0;i<n;i++)
    cout<<sumleft[i]<<" ";
   cout<<endl;

   for(int i = 0;i<n;i++)
    cout<<sumright[i]<<" ";
   cout<<endl;
  int end1,start2;
   for(int i = 0;i<n;i++)
   {
    if(sumleft[i]==sumright[i+1])
     {
      cout<<"YES\n";
       end1 = i;
       start2 = i+1;
     }
   }
/*  //copy the two subsets  
   for(int i = 0;i<=end1;i++)
    cout<<arr[i]<<" ";
   cout<<endl;

   for(int i = start2;i<n;i++)
    cout<<arr[i]<<" ";
   cout<<endl;*/
}

int main()
{
 int arr[] = {87 ,56 ,43 ,91 ,27 ,65 ,59 ,36 ,32 ,51 ,37 ,28 ,75 ,7 ,74};
   int n = sizeof(arr)/sizeof(arr[0]);
  partition(arr,n);
 return 0;
}
     
