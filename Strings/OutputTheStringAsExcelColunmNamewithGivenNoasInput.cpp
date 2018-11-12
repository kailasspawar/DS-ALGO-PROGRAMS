//if i/p => 1 o/p => 'A' i/p=> 26 o/p => 'Z' i/p = 27 o/p => 'AA' if i/p=> 28 o/p=> 'AB' and so on 
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void printString(int n)
{
  char str[50];
  
  int i = 0;
  while(n > 0)
  {
   int rem = n%26;

   if(rem==0)
   {
     str[i++]='Z';
     n = (n/=26)-1;
   }
   else
   {
     str[i++] = (rem-1) + 'A';
      n = n/=26;
   }
 }
  str[i]='\0';

  reverse(str,str+strlen(str));
 cout<<str<<endl;
 }
void Print(int arr[],int n)
{
  for(int i = 0;i<n;i++)
   printString(arr[i]);
}
int main()
{
  int arr[]= {26,51,52,80,702,705,78};
   int n = sizeof(arr)/sizeof(arr[0]);
  Print(arr,n);
 return 0;

}




