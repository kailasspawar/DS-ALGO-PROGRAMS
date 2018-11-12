#include<iostream>
#include<algorithm>
using namespace std;

struct Job
{
  char id;
  int dead;
  int profit;
};
bool comp(Job a,Job b)
{
 return a.profit > b.profit;
}
void printJobseq(Job arr[] ,int n)
{
 sort(arr,arr+n,comp);
  int result[n];
  bool slot[n] = {false};
 for(int i = 0;i<n;i++)
 {
   for(int j = min(n,arr[i].dead)-1;j>=0;j--)
   {
    if(slot[j] == false)
    {
      result[j] = i;
      slot[j] = true;
      break;
    }
  }
}
 for(int i = 0;i<n;i++)
  if(slot[i])
   cout<<arr[result[i]].id<<" ";
 cout<<endl;
}

int main()
{
 Job arr[] = {{'a',2,100},{'b',1,19},{'c',2,27},{'d',1,25},{'e',3,15}};
   int n = sizeof(arr)/sizeof(arr[0]);
  printJobseq(arr,n);
 return 0;
}

