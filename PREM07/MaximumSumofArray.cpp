#include<iostream>
using namespace std;
int maxsumarray(int *a,int n)
{
 int sum = 0;
 int sum1 = 0;
 int j,i;
 sum = a[0];
 for(i=1;i<n;i++)
 { 
      if(a[i-1]<a[i])
       sum+=a[i];
      else
       {
 	sum1 = max(sum1,sum);
	 sum = a[i];
       }
 }
 return max(sum1,sum);
}

int main()
{
  int arr[] = {1,2,2,4,2,3,6,7,8,1};
  int n = sizeof(arr)/sizeof(arr[0]);
 // cout<<n<<endl;
  cout<<maxsumarray(arr,n)<<endl;
 return 0;
}
