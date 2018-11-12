#include<iostream>
#include<climits>
using namespace std;

int noOfmoves(string arr[],int n)
{
  int ans = INT_MAX;
  for(int i = 0;i<n;i++)
  {
    int curr_cnt = 0;
    for(int j = 0;j<n;j++)
    {
      string tmp = arr[j] + arr[j];

      int index = tmp.find(arr[i]) ;
      if(index == string::npos)
        return -1 ;

    curr_cnt+=index;
    }
   ans = min(ans,curr_cnt);
  }
 return ans;
}

int main()
{
  string arr[] = {"xzzwo", "zwoxz", "zzwox", "xzzwo"};  
      int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"minimum moves req :"<<noOfmoves(arr,n)<<endl;
  return 0;
}
