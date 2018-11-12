#include<iostream>
#include"bst.h"
using namespace std;
node sortedArraytoBst(int arr[],int s,int e)
{
  if(s > e)
   return NULL;
  int mid = (s+e)/2;
   node root = newNode(arr[mid]);
 
  root->left = sortedArraytoBst(arr,s,mid-1);

  root->right = sortedArraytoBst(arr,mid+1,e); 

 return root;
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);  
 node root = NULL;

 root = sortedArraytoBst(arr,0,n-1);
   inorder(root);
  cout<<endl;
 return 0;
}



