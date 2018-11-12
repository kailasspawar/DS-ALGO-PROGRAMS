#include<iostream>
#include<climits>
#include<stdlib.h>
using namespace std;

void findPair(int a[],int b[],int n,int m,int val)
{
  int x,y;
  int mindiff = INT_MAX;
  int i = 0,j = m-1;
  
  while(i < n && j>=0)
  {
    int k = abs(a[i]+b[j] - val);
    if(k < mindiff)
    {
     x = i;
     y = j;
     mindiff = k;
    }

    if(a[i] + b[j] < val)
     i++;
    else
     j--;
}
cout<<a[x]<<" "<<b[y]<<endl;
}

int main()
{
 int ar1[] = {1, 4, 5, 7};
       int  ar2[] = {10, 20, 30, 40};
     int n = sizeof(ar1)/sizeof(ar1[0]);
     int m = sizeof(ar2)/sizeof(ar2[0]);
   findPair(ar1,ar2,n,m,50);
   return 0;
 }
