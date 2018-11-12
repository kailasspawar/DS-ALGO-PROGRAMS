#include<iostream>
using namespace std;

int func(int &x)
{
 x = x*2;
}

int main()
{
  int x = 10;

 func(x);
 cout<<"X= "<<x<<endl;
 return 0;
}
