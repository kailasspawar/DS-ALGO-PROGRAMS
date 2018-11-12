#include<iostream>
#include<climits>
using namespace std;

int LargestSum(int arr[],int n)
{
  int max_sofar = INT_MIN,max_ending_here = 0;
    int s = 0,start,end;
  for(int i = 0;i<n;i++)
  {
    max_ending_here += arr[i];
    if(max_sofar < max_ending_here)
    {
      max_sofar = max_ending_here;
        start = s;
	  end = i;
    }

    if(max_ending_here < 0)
    {
      max_ending_here = 0;
      s = s+1;
    }
    cout<<max_sofar<<" ";
  }
 //  cout<<start<<" "<<end<<endl;
  cout<<endl;
  return max_sofar;
}

int main()
{
 int arr[] = {-2,-3,4,-1,-2,1,5,-3};
   int n = sizeof(arr)/sizeof(arr[0]);

  cout<<LargestSum(arr,n)<<endl;
return 0;
}
