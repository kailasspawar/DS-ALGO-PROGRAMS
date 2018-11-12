#include<iostream>
using namespace std;
template <typename T>
void reverse(T &str,int s,int e)
{
 while(s < e)
  swap(str[s++],str[e--]);
}

string rotate(string str,int k)
{
  int n = str.size();
  reverse(str,0,k-1);
  reverse(str,k,n-1);
  reverse(str,0,n-1);
 return str;
}

void arrRot(int arr[],int n,int k)
{
  reverse(arr,0,k-1);
    reverse(arr,k,n-1);
  reverse(arr,0,n-1);
}
int main()
{
  int arr[] = {1,2,3,4,5,6,7};
     int n = sizeof(arr)/sizeof(arr[0]);
  string str = "amazon";
  cout<<rotate(str,2)<<endl;
 arrRot(arr,n,2);
  for(int i = 0;i<n;i++)
   cout<<arr[i]<<" ";
  cout<<endl;
 return 0;
}
