#include<iostream>
#include<algorithm>
using namespace std;

struct Job
{
  int start,finish,profit;
};

bool compareJob(Job a,Job b)
{
  return (a.finish < b.finish);
}

int latestNonConflict(Job arr[],int i)
{
  for(int j = i-1;j>=0;j--)
  {
    if(arr[j].finish <= arr[i-1].start)
      return j;
  }
 return -1;
}

int findMaxProfit(Job arr[],int n)
{
  if(n==1)
    return arr[n-1].profit;

  int inclProf = arr[n-1].profit;
  int i = latestNonConflict(arr,n);
  if(i != -1)
    inclProf+=findMaxProfit(arr,i+1);
  
  int exclProf = findMaxProfit(arr,n-1);

 return max(inclProf,exclProf);
}

int findMaxProf(Job arr[],int n)
{
  sort(arr,arr+n,compareJob);

  return  findMaxProfit(arr,n);
}
//   By using dynamic programming

int findMaximumProf(Job arr[],int n)
{
  sort(arr,arr+n,compareJob);
 
  int *table = new int[n];
  table[0] = arr[0].profit;
  for(int i = 1;i<n;i++)
  {
    int inclProf = arr[i].profit;
    int l = latestNonConflict(arr,i);
    if(l != -1)
      inclProf+=table[l];

    table[i] = max(inclProf,table[i-1]);
  }

  int res = table[n-1];
  delete [] table;
 return res;
}
int main()
{
  Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
      int n = sizeof(arr)/sizeof(arr[0]);
          cout << "The optimal profit is " << findMaxProf(arr, n)<<endl;
          cout << "The optimal profit is " << findMaximumProf(arr, n)<<endl;
	      return 0;
}

