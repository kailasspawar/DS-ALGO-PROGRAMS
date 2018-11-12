#include<iostream>
using namespace std;

int count(int n)
{
  if(n == 0 || n==1)
    return 1;

 return count(n-1) + (n-1) * count(n-2);
}

int main()
{
 int n = 6;
  cout<<count(n)<<endl;
return 0;
}
