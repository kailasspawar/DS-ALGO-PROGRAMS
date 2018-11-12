#include<iostream>
using namespace std;

int findCand(int arr[],int n)
{  
  int maj_ind = 0,count = 1;
  for(int i = 1;i<n;i++)
  {
    if(arr[i] == arr[maj_ind])
     count++;
    else
     count--;

    if(count == 0)
    {
     maj_ind = i;
     count = 1;
    }
  }
  return arr[maj_ind];
}
bool isMajority(int arr[],int n,int cand)
{
 int count = 0;
  for(int i = 0;i<n;i++)
   if(arr[i] == cand)
    count++;

  return (count > n/2);
}
void printMajority(int arr[],int n)
{
  int cand = findCand(arr,n);

  isMajority(arr,n,cand) ? cout<<"Yes majority ele found and ele is : "<<cand<<endl :
                           cout<<"No majority ele NOT found\n";
}

int main()
{
  int arr[] = {1,3,4,6,7,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
  printMajority(arr,n);
 return 0;
}
