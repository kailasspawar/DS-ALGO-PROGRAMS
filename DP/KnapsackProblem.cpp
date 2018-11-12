#include<iostream>
using namespace std;

int knapSack(int W,int wt[],int val[],int n)
{
  int K[n+1][W+1];
 
  for(int i = 0;i<=n;i++)
  {
    for(int j = 0;j<=W;j++)
    {
     if(i == 0 || j==0)
      K[i][j] = 0;
     else if(wt[i-1] <= j)
      K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],K[i-1][j]);
     else
      K[i][j] = K[i-1][j];
    }
  }
 return K[n][W];
}

int main()
{
  int val[] = {60,100,120};
    int n = sizeof(val)/sizeof(val[0]);
  int wt[]= {10,20,30};
 cout<<"Maximize val knapsack "<<knapSack(50,wt,val,n)<<endl;
 return 0;
}
