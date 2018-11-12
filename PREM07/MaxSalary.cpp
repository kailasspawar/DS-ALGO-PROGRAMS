#include<iostream>
#include<cmath>

using namespace std;
int diff(int a[],int n,int ele)
{
  int i,j;
 for(i=1;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
   if(a[j]<a[j+1])
   {
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }
 }
}
for(i=0;i<=n;i++)
{
 if(a[i]==ele)
 {
  return i+1;
  break;
 }
}

}
 int main()
 {
   int a[] = {5,3,9,2,6,7};
  int n = sizeof(a)/sizeof(a[0]);
  int sum1 = 0,sum2 = 0;
  int i;
  int k = n/2;
  int b[] = {5,3,9,2,6,7};
 // cout<<diff(a,n,5)<<endl;
  for(i=0;i<k;i++)
  {
   // cout<<a[i]<<endl;
     sum1 += diff(b,n,a[i]);
  }
  cout<<sum1<<endl;
 return 0;
}
