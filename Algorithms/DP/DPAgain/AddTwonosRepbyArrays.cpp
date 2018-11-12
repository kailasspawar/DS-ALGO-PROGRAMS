#include<iostream>
#include<stack>
using namespace std;

int addTwonos(int a[],int b[],int n,int m)
{
  
  int k = m-1;
  int carry = 0;
  stack<int>v;
  for(int i = n-1;i>=0;i--)
  {
    int sum = 0;

    if(k >= 0)
      sum = a[i] + b[k] + carry;
    else
     sum = a[i] + carry;
     carry = 0;  
    if(sum > 9) 
    {
      sum%=10;
      carry = 1;
    }
    
    k--;
    v.push(sum);
  }

  if(carry)
   v.push(carry);
 
  while(!v.empty())
  {
   cout<<v.top()<<" ";
    v.pop();
  }
 cout<<endl;

}

int main()
{ 
    int a[] = {2,2,7,5,3,3,7,3,3,6,8,3,0,5,0,6};
     int b[] = {4,3,3,8};
      int n = sizeof(a)/sizeof(a[0]);
       int m  = sizeof(b)/sizeof(b[0]);
  addTwonos(a,b,n,m);
 return 0;
}
