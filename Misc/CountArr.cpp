#include<iostream>
#define M 256
using namespace std;

int main()
{
  int count[M] = {0};
  string str = "geeksforgeeks";
     int n = str.length();

  for(int i = 0;i<n;i++)
   count[str[i]]++;
  
  for(int i = 0;i<M;i++)
   if(count[i] == 1)
    cout<<char(i)<<endl;

 return 0;
}

