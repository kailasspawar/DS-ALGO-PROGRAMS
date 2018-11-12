#include<iostream>
using namespace std;

int findZeroes(int arr[],int n,int m)
{
  int wL = 0,wR = 0;
  int bestL = 0,bestWindow = 0,zeroCnt = 0;

  while(wR < n)
  {
    if(zeroCnt <= m)
    {
      if(arr[wR] == 0)
       zeroCnt++;
      wR++;
    }
    if(zeroCnt > m)
    {
      if(arr[wL] == 0)
       zeroCnt--;
      wL++;
    }

    if(wR-wL > bestWindow)
    {
      bestL = wL;
      bestL = wR - wL ;
    }
  }

  for(int i = 0;i<bestWindow;i++)
   if(arr[bestL + i] == 0)
    cout<<bestL+i<<" ";
  cout<<endl;
}

int main()
{
  int arr[] = {1,0,0,1,1,0,1,0,1,1};
     int n = sizeof(arr)/sizeof(arr[0]);
   findZeroes(arr,n);
  return 0;
}
  
