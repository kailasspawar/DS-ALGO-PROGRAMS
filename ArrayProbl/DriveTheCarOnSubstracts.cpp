/*
Suppose you are car driver and you have to drive a car on a track divided into "N" no. of sub-tracks. You are also given the value of "K" i.e. the total kilometers a car can drive on each sub-track. If the car can't cover a sub-track, you can add any unit of Petrol in it. With each unit of petrol added, the total kilometers your car can travel will increase by one unit .

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two space separated integers N and K. The second line of each test case contains N space separated integers (A[])  denoting the distance of each N sub-tracks.


Output:
For each test case in a new line you have to print out the minimum unit of Petrol your car require to cover all the sub-tracks. If no extra unit of petrol is required, print -1.

Constraints:
1<=T<=100
1<=N,K<=200
1<=A[]<=1000

Example:
Input:
2
5 7
2 5 4 5 2
5 4
1 6 3 5 2
Output:
-1
2

Explanation:
In Case 2, you are given 5 sub-tracks with different kilometers. Your car can travel 4 km on each sub-track. So, when you come on sub-track 2nd you have to cover 6 km of distance, so you need to have 2 unit of petrol more to cover the distance, for 3rd sub-track, now your car can travel 6 kilometers, so no problem and so on.
*/

#include<iostream>
#include<climits>
using namespace std;
int drivecar(int arr[] ,int n,int k)
{
   int backup = k;
     int max = INT_MIN;
   for(int i = 0;i<n;i++)
   {
     if(arr[i]-backup > max)
       max = arr[i]-backup;
     if(arr[i] > k)
      k += arr[i]-k;
   }

   if(max==INT_MIN)
     cout<<"-1"<<endl;
   else
     cout<<max<<endl;
}

int main()
{
  int arr[] = {87,78,16,94,36,87,93,50,22,63,28,91,60,64,27,41,27,73,37,12,69,68,30,83,31,63,24,68,36,30,3,23,59,70,68,94,57,12,43,30,74,22,20,85,38,99,25,16,71,14,27,92,81,57,74,63,71,97,82,6,26,85};
  int n = sizeof(arr)/sizeof(arr[0]);
  drivecar(arr,n,89);

  return 0;
}






































