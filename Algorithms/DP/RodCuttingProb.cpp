#include<iostream>
#include<climits>
using namespace std;

int cutRod(int price[] ,int n)
{
  int val[n+1];
    val[0] = 0;

  for(int i = 1;i<=n;i++)
  {
    int max_ele = INT_MIN;
    for(int j = 0;j<i;j++)
      max_ele = max(max_ele,price[j]+val[i-j-1]);
    val[i] = max_ele;
  }
 return val[n];
}

int main()
{
  int price[] = {3,5,8,9,10,17,17,20};
    int size = sizeof(price)/sizeof(price[0]);

  cout<<cutRod(price,size)<<endl;

  return 0;
}
