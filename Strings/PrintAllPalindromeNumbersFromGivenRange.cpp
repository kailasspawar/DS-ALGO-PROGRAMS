#include<iostream>
using namespace std;

bool reverse(int n)
{
  int rev = 0;
  for(int i = n;i>0;i/=10)
   rev = rev*10 + i%10;

  return (n ==rev);
}

void printPalindrome(int start,int end)
{
  for(int i = start;i<=end;i++)
   if(reverse(i))
    cout<<i<<" ";
}

int main()
{
  
  printPalindrome(100,2000);
    return 0;
}

