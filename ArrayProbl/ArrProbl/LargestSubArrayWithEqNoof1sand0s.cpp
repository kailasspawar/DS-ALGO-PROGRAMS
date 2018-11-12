#include<iostream>
#include<unordered_map>
using namespace std;
int largestLenght(int arr[],int n)
{
  int max_len = 0,end_ind = 0,sum = 0;

  unordered_map<int,int>hm;
  //here we convert the 0s to -1 and then problem becomes finding 
  // subarray with sum equals to zero
  for(int i = 0;i<n;i++)
   arr[i] = arr[i] == 0 ? -1 : 1;

  for(int i = 0;i<n;i++)
  {
    sum+=arr[i];

    if(sum == 0)
    {
     max_len = i+1;
     end_ind = i;
    }

    if(hm.find(sum+n) != hm.end())
    {
      if(max_len < i-hm[sum+n])
      {
       max_len = i - hm[sum+n];
       end_ind = i;
      }
    }
    else 
      hm[sum+n] = i;
  }

  for(int i = 0;i<n;i++)
   arr[i] = arr[i] == -1 ? 0 : 1;
  for(int i = end_ind - max_len + 1;i<=end_ind;i++)
   cout<<arr[i]<<" ";
 cout<<endl;
  return max_len;
}

int main()
{
  int arr[] = {1,0,0,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
  cout<<largestLenght(arr,n)<<endl;
 return 0;
}
