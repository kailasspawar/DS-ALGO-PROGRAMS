#include<iostream>
using namespace std;

int fact(int n)
{
  if(n==0) return 1;
 return n*fact(n-1);
}
int sumOfnNaturalNos(int n)
{
  return (n*(n+1)/2);
}
int main()
{
  int n = 3,n1=2;
    int   r = 2;
  cout<<n<<"P"<<r<<"="<<fact(n)/fact(n-r)<<endl;
         
        cout<<n<<"C"<<r<<"="<<(fact(n)/fact(n-r))/fact(r)<<endl;
  cout<<"Sum of First "<<n1<<" Natural nos is: "<<sumOfnNaturalNos(n1)<<endl;
  return 0;
}
