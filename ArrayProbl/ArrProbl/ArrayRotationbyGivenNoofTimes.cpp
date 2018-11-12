#include<iostream>
using namespace std;
int gcd(int a,int b)
{
  if(b==0)
    return a;

  return gcd(b,a%b);
}
void rotate(int arr[],int n,int d)
{
  int i,j,k,temp;
 for(int i = 0;i<gcd(n,d);i++)
 {
   temp = arr[i];
   j = i;
  while(1)
  {
    k = j + d;
    if(k  >= n)
     k = k-n;
    if(k==i)
     break;

    arr[j] = arr[k];
    j = k;
  }
 arr[j] = temp;
}
}

int main()
{
 int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
   int n = sizeof(arr)/sizeof(arr[0]);
 rotate(arr,n,3);
 for(int &i : arr)
  cout<<i<<" ";
 cout<<endl;
return 0;
}
