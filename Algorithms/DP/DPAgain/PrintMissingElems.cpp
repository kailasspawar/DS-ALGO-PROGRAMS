#include<iostream>
#define LIMIT 1000
using namespace std;

void printMissing(int arr[],int n)
{
  bool seen[LIMIT] = {false};
  for(int i = 0;i<n;i++)
   seen[arr[i]] = true;

  int i = 0;
  cout<<"[";
  while(i < LIMIT)
  {
    if(seen[i] == false)
    {
      int j = i+1;
      while(j < LIMIT && seen[j] == false)
       j++;

      j == i+1  ? cout<<i<<" " : cout<<i<<"-"<<j-1<<" ";

      i = j;
   }
   else
    i++;
  }
 cout<<"\b"<<"]"<<endl;
}

int main()
{
  int arr[] = {88,105,3,2,400,0,10};
     int n = sizeof(arr)/sizeof(arr[0]);
  printMissing(arr,n);
 return 0;
}


