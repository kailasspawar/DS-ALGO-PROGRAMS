#include<iostream>
using namespace std;

int maxfindArr(int arr[],int n,int m)
{
  int wR = 0,wL = 0,bestWindow = 0;
     int zeroCnt = 0,bestL = 0;

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
     if(arr[wL]==0)
      zeroCnt--;
     wL++;
    }
    if(wR - wL > bestWindow)
    {
     bestWindow = wR - wL;
     bestL = wL;
    }
  }

 for(int i = 0;i<bestWindow;i++)
  if(arr[bestL+i] == 0)
   cout<<bestL+i<<" ";
 cout<<endl;
}

int main()
{
  
     int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1};
        int m = 2;
	   int n =  sizeof(arr)/sizeof(arr[0]);
    maxfindArr(arr,n,m);
   return 0;
 }
