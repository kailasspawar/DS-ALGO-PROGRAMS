#include<iostream>
#include"bint.h"
using namespace std;

bool isSumPath(bnode root,int sum)
{
  if(sum==0)
    return true;
  if(!root)
    return false;
  sum-=root->data;

  return  isSumPath(root->left,sum) ||
    isSumPath(root->right,sum);
}

int main()
{
  bnode root = newNode(10);
      root->left = newNode(8);
    root->left->left = newNode(3);
   root->right = newNode(2);
     root->right->left = newNode(2);
     int sum = 13;
  isSumPath(root, sum) ? 
     cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
 
