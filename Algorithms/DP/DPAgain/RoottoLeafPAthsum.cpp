#include<iostream>
#include"bt.h"
using namespace std ;

bool isPathSum(bnode root,int sum)
{
  if(!root)
    return sum == 0;
  else
  {
    bool ans = false;

    int subSum = sum-root->data;

   if(subSum == 0 && !root->left && !root->right)
    return true;

   if(root->left)
    ans = ans || isPathSum(root->left,subSum);
   if(root->right)
    ans = ans || isPathSum(root->right,subSum);

  return ans;
 }
}

int main()
{
   bnode root = newNode(10);
    root->left        = newNode(8);
      root->right       = newNode(2);
        root->left->left  = newNode(3);
	  root->left->right = newNode(5);
	    root->right->left = newNode(2);
   int sum = 21;
  isPathSum(root,sum) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
