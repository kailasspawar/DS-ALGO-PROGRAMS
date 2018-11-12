#include<iostream>
#include<string.h>
using namespace std;

void reverse(char num[],int i,int j)
{
 while( i < j)
 {
   swap(num[i],num[j]);
   i++;
   j--;
 }
}

void nextGreater(char num[],int n)
{
  if(n <= 3)
  {
    cout<<"Not Possible\n";
   return ;
  }
  int mid = n/2-1;
  int i,j;
  for(i = mid-1;i>=0;i--)
   if(num[i] < num[i+1])
    break;
  if(i < 0)
  {
    cout<<"Not Possible\n";
    return ;
  }
  int smallest = i+1;
  for(j = i+2;j<=mid;j++)
   if(num[j] > num[i] &&
      num[j] < num[smallest])
      smallest = j;

  swap(num[i],num[smallest]);

  swap(num[n-i-1],num[n-smallest-1]);

  reverse(num,i+1,mid);

  if(n % 2==0)
   reverse(num,mid+1,n-i-2);
  else
   reverse(num,mid+2,n-i-2);
 
 cout<<"Next Palindrome :"<<num<<endl;
}

int main()
{
  char num[] = "4697557964";
     int n = strlen(num);
   nextGreater(num,n);
  return 0;
}
