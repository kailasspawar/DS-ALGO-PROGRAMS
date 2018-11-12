#include<iostream>
#define n 4
using namespace std;

int maxpathSum(int arr[][n])
{
  for(int i = 1;i<n;i++)
  {
    for(int j = 0;j<n;j++)
    {
      if(j == 0)
       arr[i][j] += arr[i-1][j];
      else
       arr[i][j] += max(arr[i-1][j-1],arr[i-1][j]);
    }
  }
 for(int i = 0;i<n;i++)
 {
   for(int j = 0;j<n;j++)
    cout<<arr[i][j]<<" ";
   cout<<endl;
 }
 int maxele = -1;
 for(int i = 0;i<n;i++)
  maxele = max(maxele,arr[n-1][i]);

return maxele;
  
}

int main()
{
  int arr[][n] = { {3,0,0,0},
  		   {7,4,0,0},
		   {2,4,6,0},
		   {8,5,9,3}};
   cout<<"maxele is :"<<maxpathSum(arr)<<endl;
  return 0;
}

