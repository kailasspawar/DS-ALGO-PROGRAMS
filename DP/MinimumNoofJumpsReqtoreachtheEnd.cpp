#include<iostream>
using namespace std;

int maxJumps(int arr[],int n)
{
 if(n <= 1)
   return 0;
 if(arr[0] == 0)
  return -1;
  int maxReach = arr[0],steps = arr[0],jump = 1;

  for(int i = 1;i<n;i++)
  {
    if(i == n-1)
     return jump;

    maxReach = max(maxReach,i+arr[i]);
   steps--;

   if(steps == 0)
   {
    jump++;
     if(i >= maxReach)
      return -1;

     steps = maxReach - i;
   }
 }
return -1;
}

int main()
{
  int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
      int size = sizeof(arr)/sizeof(int);
   cout<<"min jumps req is "<<maxJumps(arr,size)<<endl;
  return 0;
}
