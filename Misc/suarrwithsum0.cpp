#include<bits/stdc++.h>
using namespace std;
int sumZero(int temp[], int* starti,
             int* endj, int n)
{
    // Map to store the previous sums
    map<int, int> presum;
    int sum = 0; // Initialize sum of elements
 
    // Initialize length of sub-array with sum 0
    int max_length = 0;
 
    // Traverse through the given array
    for (int i = 0; i < n; i++)
    {
        // Add current element to sum
        sum += temp[i];
        cout<<sum<<endl; 
        if (temp[i] == 0 && max_length == 0)
        {
            *starti = i;
            *endj = i;
            max_length = 1;
        }
        if (sum == 0)
        {
          cout<<"HH";
            if (max_length < i + 1)
            {
                *starti = 0;
                *endj = i;
            }
            max_length = i + 1;
        }
 
        // Look for this sum in Hash table
        if (presum.find(sum) != presum.end())
        {
            // store previous max_length so
            // that we can check max_length
            // is updated or not
            int old = max_length;
 
            // If this sum is seen before,
            // then update max_len
            max_length = max(max_length, i - presum[sum]);
 
            if (old < max_length)
            {
                // If max_length is updated then
                // enter and update start and end
                // point of array
                *endj = i;
                *starti = presum[sum] + 1;
            }
        }
        else
 
            // Else insert this sum with
            // index in hash table
            presum[sum] = i;
    }
 
    // Return true if max_length is non-zero
    return max_length;
}
int main()
{
  int arr[] = {7,-6,8,-2};
 int s = 0,e = 0;
  sumZero(arr,&s,&e,4);
 return 0;
} 
