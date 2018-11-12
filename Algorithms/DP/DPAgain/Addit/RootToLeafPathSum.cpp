#include<iostream>
#include"bst.h"
using namespace std;

bool hasPathSum(bnode root,int sum)
{
  if(!root)
   return sum==0;
  else
  {
   bool ans = false;
  int subSum = sum-root->data;
  if(subSum == 0 && !root->left && !root->right)
   return true;
  
  if(root->left)
    ans = ans || hasPathSum(root->left,subSum);
  if(root->right)
   ans = ans || hasPathSum(root->right,subSum);

 return ans;
 }
}

int main()
{
   bnode root = newNode(10);
     root->left = newNode(7);
    root->right = newNode(1);
    root->right->right = newNode(3);
   root->left->left = newNode(5);
   root->left->right = newNode(8);
  hasPathSum(root,14) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
