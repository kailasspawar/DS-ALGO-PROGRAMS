#include<iostream>
#include<stdio.h>
using namespace std;

int func(int a,int b)
{
 int sum = 0;
  for(int i = a;i<b;i++)
   sum+=i;
 return sum;
}

int main()
{
  int a = 10, b = 20;
  clock_t t ;
  t = clock();
  func(a,b);
  t = clock() - t;

  double time_taken = ((double)t)/CLOCKS_PER_SEC;

  printf("%f\n",time_taken);
 return 0;
}
