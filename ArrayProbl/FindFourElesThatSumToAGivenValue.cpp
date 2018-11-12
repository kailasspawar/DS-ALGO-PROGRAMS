/*
Given an array of integers, find all combination of four elements in the array whose sum is equal to a given value X.
For example, if the given array is {10, 2, 3, 4, 5, 9, 7, 8} and X = 23, then your function should print “3 5 7 8” (3 + 5 + 7 + 8 = 23).
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
struct pairSum
{
 int sum;
   int first;
   int second;
};
int compare(const void *a,const void *b)
{
 return ((*(pairSum *)a).sum - (*(pairSum *)b).sum);
}
bool noCommon(struct pairSum a,struct pairSum b)
{
  if(a.first == b.first || a.first==b.second || a.second == b.first || a.second == b.second)
    return false;
 return true;
}

void findPair(int arr[],int n,int k)
{
  int size = (n*(n-1))/2;
  struct pairSum aux[size];
  int p = 0;
  for(int i = 0;i<n-1;i++)
  {
    for(int j = i+1;j<n;j++)
    {
     aux[p].sum = arr[i] + arr[j];
     aux[p].first = i;
     aux[p].second = j;
     p++;
    }
  }
   
  qsort(aux,size,sizeof(aux[0]),compare);

  int i = 0;
  int j = size-1;
  while(i < size && j >= 0)
  {
    if((aux[i].sum + aux[j].sum == k) && noCommon(aux[i],aux[j]))
    {
     cout<<arr[aux[i].first]<<" "<<arr[aux[i].second]<<" "<<arr[aux[j].first]<<" "<<arr[aux[j].second]<<endl;
       return;
    }
    else if(aux[i].sum + aux[j].sum < k)
     i++;
    else
     j--;
  }
 }

 int main()
 {
  int arr[] = {10, 20, 30, 40, 1, 2};
      int n = sizeof(arr) / sizeof(arr[0]);
          int X = 91;
      findPair(arr,n,X);

    return 0;
 }
