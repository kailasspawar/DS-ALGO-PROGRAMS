#include<iostream>
#include<algorithm>
using namespace std;

struct pair1
{
  int a,b;
};

int maxChainlength(struct pair1 arr[],int n)
{
  int mcl[n] = {1};

  for(int i = 1;i<n;i++)
   for(int j = 0;j<i;j++)
     if(arr[i].a > arr[j].b && mcl[i] < mcl[j] + 1)
       mcl[i] = mcl[j] + 1;

 return *max_element(mcl,mcl+n);
}

int main()
{
  struct pair1 arr[] = {{5,24},{39,60},
                       {15,28},{27,40},
		       {50,90}};
   int n = sizeof(arr)/sizeof(arr[0]);

  cout<<maxChainlength(arr,n)<<endl;
 return 0;
}
