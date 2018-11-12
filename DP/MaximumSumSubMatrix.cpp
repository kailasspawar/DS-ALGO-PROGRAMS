#include<iostream>
#include<string.h>
#include<climits>
#define R 4
#define C 5
using namespace std;
int kadane(int arr[],int &start,int &finish,int n)
{
  int local_s = 0;
  finish = -1;
 int sum = 0,maxSum = INT_MIN;
  for(int i = 0;i<n;i++)
  {
   sum+=arr[i];
   if(sum < 0)
   {
     sum = 0;
     local_s = i+1;
   }
   else if(sum > maxSum)
   {
     maxSum = sum;
     start = local_s;
     finish = i;
   }
 }

  if(finish != -1)
   return maxSum;

  maxSum = arr[0];
 for(int  i  =1;i<n;i++)
 {
  if(arr[i] > maxSum)
  {
   maxSum = arr[i];
   start = finish = i;
  }
 }
}
void printMaxsum(int M[R][C])
{
  int maxSum = INT_MIN;
  int temp[R];
     int finalLeft,finalRight ,finalTop,finalBott;
    int start = 0,finish = 0;
   for(int left = 0;left < C;left++)
   {
     memset(temp,0,sizeof(temp));
     for(int right = left;right<C;right++)
     {
       for(int i = 0;i<R;i++)
        temp[i]+=M[i][right];

       int sum = kadane(temp,start,finish,R);
      if(maxSum < sum)
      {
        maxSum = sum;
	finalLeft = left;
	finalRight = right;
	finalTop = start;
	finalBott = finish;  
      }
    }
  }
 cout<<"maxsum = "<<maxSum<<endl;
}
int main()
{
  int M[R][C]  = {{1,-2,-1,-4,-20},
  		  {-8,-3,4,2,1},
		  {3,8,10,1,3},
		  {-4,-1,1,7,-6}};
   printMaxsum(M);
  return 0;
}
      

