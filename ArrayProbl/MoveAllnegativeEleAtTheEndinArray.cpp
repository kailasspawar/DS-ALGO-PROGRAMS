#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int swap(int *a,int *b)
{
  int temp = *a;
   *a = *b;
   *b = temp;
}*/
void moveNeg(int arr[],int n)
{
  int i = -1;
  for(int j = 0;j<n;j++)
  {
    if(arr[j] > 0)
    {
      i++;
     swap(arr[i],arr[j]);
    }
  }

  for(int i = 0;i<n;i++)
   cout<<arr[i]<<" ";
  cout<<endl;

}

void interchange(int arr[],int n)
{
   vector<int>res;
   for(int i = 0;i<n;i++)
     if(arr[i] > 0)
      res.push_back(arr[i]);
 
   for(int i = 0;i<n;i++)
     if(arr[i] < 0)
      res.push_back(arr[i]);

   
   for(int i = 0;i<res.size();i++)
    cout<<res[i]<<" ";
   cout<<endl;
 }

int main()
{
 int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
   int n = sizeof(arr)/sizeof(arr[0]);
// interchange(arr,n);
     moveNeg(arr,n);
 return 0;
 }
