#include<iostream>
using namespace std;
int maxsum(int arr[],int n)
{
    int max = 0;
//    int sum = 0;
    if(n==1)
      return arr[0];
    if(n==2)
    {
         if(arr[0] > arr[1])
           return arr[0];
         else
            return arr[1];
    }
    if(n==3)
    {
        if(arr[0] < arr[1] &&arr[1] > arr[2])
          return arr[1]; 
        else
          return (arr[0] + arr[2]);
    }
     
    for(int i = 0;i<n-2;i++)
    {
         int sum = arr[i];
      for(int j = i+2;j<n;j+=2)
       {
           sum+=arr[j];
       }
       if(max < sum)
       {
         max = sum;
           sum = 0;
       }
    }
    return max;
    
}
int main()
{
  /*  
     int arr[] ={5,5,10,100,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);        
         cout<<maxsum(arr,n)<<endl;
	//code
	return 0;*/
 
     int t,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int arr[n];
         for(int i = 0;i<n;i++)
          cin>>arr[i];
          
         cout<<maxsum(arr,n)<<endl;
     }
  return 0;
}
