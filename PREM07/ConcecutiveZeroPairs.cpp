#include<iostream>
#include<cmath>
using namespace std;

int consecutivepair(int n)
{
  int q;
  if(n==1)
   return 0;
  if(n==2 || n==3)
   return 1;

  q = (pow(2,n)/12);
 return(2*q+1);
}
int main()
{
  int n;
 
 cout<<"Enter the no of steps\n";
 cin>>n;
 cout<<"NO of consec zeroes "<<consecutivepair(n)<<endl;
 return 0;
}

