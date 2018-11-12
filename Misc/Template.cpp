#include<iostream>
using namespace std;

template <typename T>

inline T mymax(T a,T b)
{
 return (a > b) ? a : b;
}

int main()
{
 cout<<mymax(3,3)<<endl;
 cout<<mymax(3.4,4.5)<<endl;

 return 0;
}
