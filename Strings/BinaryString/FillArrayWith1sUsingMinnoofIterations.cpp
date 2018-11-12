#include<iostream>
using namespace std;

int minIteration(int arr[],int n)
{
 int onefound = false;
   int res = 0;

   for(int i = 0;i<n;)
   {
     if(arr[i]==1)
       onefound = true;

     while(i < n &&arr[i]==1)
      i++;

     int count_zero = 0;

     while( i < n&&arr[i]==0)
     {
       count_zero++;
       i++;
     }

     if(onefound==false && i==n)
      return -1;
     int curr_count;
     if(i < n && onefound==true)
     {
       if(count_zero & 1 == 0)
        curr_count = count_zero / 2;
       else
        curr_count = (count_zero + 1)/2; 
      count_zero = 0;
     }
    else
     {
       curr_count = count_zero;
       count_zero = 0;
     }
    res = max(res,curr_count);
  }
  return res;
}

 int main()
 {
   int arr[] = {0, 1, 0, 0, 1, 0, 0,
                   0, 0, 0, 0, 0, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << minIteration(arr, n)<<endl;
     return 0;
}

