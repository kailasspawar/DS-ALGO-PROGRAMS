#include<iostream>
#include"bst.h"
#include<unordered_set>
using namespace std;

void printLeaf(int arr[],int n,unordered_set<int>&us)
{
  if(n==1)
  {
    cout<<arr[n-1];
      return ;
  }
   int prev = arr[2];
  for(int i = 2;i<n;i++)
  {
    if(arr[i] > arr[i-1]&&us.find(arr[i-1])==us.end())
    {
      us.insert(arr[i-1]);
        us.insert(arr[i]);
      cout<<arr[i-1]<<" "<<arr[i]<<" ";
    }
    else if(arr[i] > arr[i-1] && us.find(arr[i-1])!=us.end())
       cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
 // int preorder[] = { 890, 325, 290, 530, 965 };
    int preorder[] = {3,2,4};
      int n = sizeof(preorder)/sizeof(preorder[0]);
      unordered_set<int>us;
    printLeaf(preorder,n,us);
   return 0;
}
     
      


  
