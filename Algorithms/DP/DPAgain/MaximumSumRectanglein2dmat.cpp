#include<iostream>
#include<climits>
#include<string.h>
#define R 4
#define C 5
using namespace std;

int kadane(int *arr,int &start,int &finish,int n)
{
  int sum = 0,maxSum = INT_MIN;
   int local_start = 0;
   finish = -1;;
  for(int i = 0;i<n;i++)
  {
    sum+=arr[i];

    if(sum < 0)
    {
      sum = 0;
      local_start = i+1;
    }
    else if(sum > maxSum)
    {
     maxSum = sum;
     start = local_start;
     finish = i;
    }
  }

   if(finish != -1)
     return maxSum;

  maxSum = arr[0];
     start = finish = 0;

  for(int i = 1;i<n;i++)
  {
   if(arr[i] > maxSum)
   {
     maxSum = arr[i];
     start = finish = i;
   }
 }
 return maxSum;
}

int findMaxSum(int Mat[R][C])
{
  int maxSum = INT_MIN;
  int finalLeft,finalRight,finalTop,finalBottom ;

  for(int left = 0;left<C;left++)
  {
      int temp[R];
       memset(temp,0,sizeof(temp));
    for(int right = left;right<C;right++)
    {
        int start,finish;
      for(int i = 0;i<R;i++)
        temp[i]+= Mat[i][right];

      int sum = kadane(temp,start,finish,R);

      if(sum > maxSum)
      {
        maxSum = sum;
	finalLeft = left;
	finalRight  = right;
	finalTop = start;
	finalBottom = finish;
      }
    }
  }
  cout<<"("<<finalTop<<","<<finalLeft<<")"<<" "<<"("<<finalBottom<<","<<finalRight<<")"<<endl;
  cout<<maxSum<<endl;
}

int main()
{
   int M[R][C] = {{1, 2, -1, -4, -20},
                      {-8, -3, 4, 2, 1},
		      {3, 8, 10, 1, 3},
	              {-4, -1, 1, 7, -6 }};

    findMaxSum(M);
  return 0;
}





