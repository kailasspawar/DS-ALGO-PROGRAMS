/*
Given a number n, count minimum steps to minimize it to 1 according to the following criteria:

If n is divisible by 2 then we may reduce n to n/2.
If n is divisible by 3 then you may reduce n to n/3.
Decrement n by 1.
Examples:

Input : n = 10
Output : 3
*/
#include<iostream>
#include<string.h>
using namespace std;
//recursive solution
 int minimize(int n)
 {
   if(n==1)
     return 0;

   if(n%2==0)
     return 1 + minimize(n/2);
   else if(n%3==0)
     return 1 + minimize(n/3);
   else
     return 1 + minimize(n-1);
 }
int getMinSteps(int n,int *memo)
{
  if(n==1)
    return 0;
  if(memo[n]!= -1)
   return memo[n];
 
  int res = getMinSteps(n-1,memo);
  if(n % 2==0)
    res = min(res,getMinSteps(n/2,memo));
  if(n % 3==0)
    res = min(res,getMinSteps(n/3,memo));

 memo[n] = 1 + res;
 return memo[n];
}

int getMinSteps(int n)
{
 int memo[n+1];
 memset(memo,-1,sizeof(memo));
//  for(int i =0;i<=n;i++)
  // memo[i] = -1;

 return getMinSteps(n,memo);
}
int main()
{
  int n = 6;
 cout<<"Minimum steps req "<<getMinSteps(10)<<endl;
  cout<<minimize(n)<<endl;
 return 0;
}
