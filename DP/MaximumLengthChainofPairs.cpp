#include<iostream>
#include<string.h>
using namespace std;

struct ppair
{
 int a,b;
};

int maxLength(struct ppair arr[],int n)
{
  int *mcl  =(int *)malloc(n*sizeof(int));
  for(int i = 0;i<n;i++)
   mcl[i] = 1;


  for(int i = 1;i<n;i++)
   for(int j = 0;j<i;j++)
    if(arr[i].a > arr[j].b && mcl[i] < mcl[j] + 1)
     mcl[i] = mcl[j] + 1;
 int max = 0;
  for(int i = 0;i<n;i++)
   if(max < mcl[i])
    max = mcl[i];

  return max;
}

int main()
{
  struct ppair arr[] = {{5,24},{15,25},
                       {27,40},{50,60}};
   int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"max chain len "<<maxLength(arr,n)<<endl;
 return 0;
}
