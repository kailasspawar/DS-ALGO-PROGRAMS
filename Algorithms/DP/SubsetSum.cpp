#include<iostream>
using namespace std;

bool isSubsetSum(int set[],int n,int sum)
{
  bool subset[n][sum+1];

  for(int i = 0;i<=n;i++)
   subset[i][0] = true;

  for(int i = 0;i<=n;i++)
    for(int j = 0;j<=sum;j++)
      subset[i][j] = subset[i-1][j] ||
                     subset[i-1][j-set[i]];
  return subset[n-1][sum];
}

int main()
{
  int set[] = {1,2,3};
    int sum = 0;
    int n = sizeof(set)/sizeof(set[0]);
  isSubsetSum(set,n,sum) ? cout<<"Given set has subset =sum "<<sum<<endl :
                           cout<<"Given set does not have sum= "<<sum<<endl;
  return 0;
}
