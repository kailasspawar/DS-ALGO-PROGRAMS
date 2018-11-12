#include<iostream>
using namespace std;

int knapSack(int val[],int w[],int n,int W)
{
  if(n==0 || W==0)
    return 0;

  if(w[n-1] > W)
    return knapSack(val,w,n-1,W);
 
  return max(val[n-1] + knapSack(val,w,n-1,W-w[n-1]),
                        knapSack(val,w,n-1,W));
}
int knapsackdp(int val[],int w[],int n,int W)
{
 int sol[n+1][W+1];
 for( int i = 0;i<=n;i++)
 {
  for(int j = 0;j<=W;j++)
  {
    if(i == 0 || j== 0)
     sol[i][j] = 0;

    else if(w[i-1] <= j)
     sol[i][j] = max(val[i-1] + sol[i-1][j-w[i-1]],sol[i-1][j]);
    
    else
      sol[i][j] = sol[i-1][j];
  }
}
return sol[n][W];
}
int main()
{ 
  int val[] = {60,100,120};
    int w[] = {10,20,30};
   int n = sizeof(val)/sizeof(val[0]);
  int W = 50;
  cout<<"Maximum knapsack val is :"<<"\n";
  cout<<knapSack(val,w,n,W)<<endl;

  cout<<"Maximum knapsack val using dynamic prog :"<<"\n";
  cout<<knapsackdp(val,w,n,W)<<endl;

 return 0;
}
