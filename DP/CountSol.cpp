#include<iostream>
using namespace std;

int countSol(int n,int val)
{
  if(n == 1 && val >= 0)
   return 1;
 
 int total = 0;
 for(int i = 0;i<=val;i++)
  total+=countSol(n-1,val-i);

 return total;
}

int main()
{
  int n = 5 ;
  int val = 20;
 cout<<countSol(n,val)<<endl;
 return 0;
}
