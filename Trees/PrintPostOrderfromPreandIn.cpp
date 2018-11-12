#include<iostream>
using namespace std;
int search(int arr[],int x,int n)
{
  for(int i = 0;i<n;i++)
  {
    if(arr[i] == x)
     return i;
  }
}
void printPreOrder(int in[],int pre[],int n)
{
  int root = search(in,pre[0],n);

  if(root!=0)
    printPreOrder(in,pre+1,root);

  if(root!=n-1)
   printPreOrder(in+root+1,pre+root+1,n-root-1);

  cout<<pre[0]<<" ";
}

int main()
{
  int arr[] = {4,2,5,1,3,6};
    int pre[] = {1,2,4,5,3,6};
   int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Post order travrsl is :";
  printPreOrder(arr,pre,n);
  cout<<"\n";
 return 0;
}

