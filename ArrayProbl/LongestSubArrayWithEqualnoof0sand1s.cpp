#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int maxLen(int arr[],int n)
{
  int maxlen = 0,end_ind = -1,sum = 0;
  unordered_map<int,int>hm;

  for(int i = 0;i<n;i++)
   arr[i] = (arr[i]==0) ? -1 : 1;

  for(int i = 0;i<n;i++)
  {
    sum+=arr[i];

    if(sum==0)
    {
      maxlen = i+1;
      end_ind = i;
    }

    if(hm.find(sum+n) != hm.end())
    {
      if(maxlen < i - hm[sum+n])
      {
        maxlen = i - hm[sum+n];
	end_ind = i;
      }
    }
    else
      hm[sum+n] = i;
  }

  for(int i = 0;i<n;i++)
   arr[i] = (arr[i]==0) ? -1 : 1;
  cout<<end_ind-maxlen+1<<" "<<end_ind<<endl;
 return maxlen;
}


 int main()
 {
   int arr[] = {1,0,0,1,0,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
   cout<<maxLen(arr,n)<<endl;
  return 0;
 }
