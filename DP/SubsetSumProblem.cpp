#include<iostream>
using namespace std;

//following is recursive approach to solve the problem

bool subSetSum(int set[],int n,int sum)
{
  if(sum == 0)
    return true;

  if(n==0 && sum!=0)
    return false;

  if(set[n-1] > sum)
   return subSetSum(set,n-1,sum);
 return subSetSum(set,n-1,sum) ||
         subSetSum(set,n-1,sum-set[n-1]);
}

bool subsetSumDP(int set[],int n,int sum)
{
 bool subset[n+1][sum+1];

 for(int i = 0;i<=n;i++)
  subset[i][0] = true;

 for(int i =1;i<=sum;i++)
  subset[0][i] = false;

 for(int i = 1;i<=n;i++)
 {
   for(int j = 1;j<=sum;j++)
   {
     if( j < set[i-1])
      subset[i][j] = subset[i-1][j];
     if(j >= set[i-1])
      subset[i][j] = subset[i-1][j] || subset[i-1][j-set[i-1]];
   }
 }
return subset[n][sum];
}

int main()
{

     int set[] = {3, 34, 4, 12, 5, 2};
       int sum = 9;
       int n = sizeof(set)/sizeof(set[0]);
   subSetSum(set,n,sum) ? cout<<"Given set contains subset sum\n" : 
                        cout<<"not contain subset sum\n";
   subsetSumDP(set,n,sum) ? cout<<"Given set contains subset sum\n" : 
                        cout<<"not contain subset sum\n";
  
   return 0;
}
