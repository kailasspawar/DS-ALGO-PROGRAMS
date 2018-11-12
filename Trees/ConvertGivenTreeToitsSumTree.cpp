#include<iostream>
#include"bint.h"
using namespace std;

int toSumTree(bnode &root)
{
  if(!root)
    return 0;
  int old_val = root->data;
 
  root->data = toSumTree(root->left) + toSumTree(root->right);

  return root->data + old_val;
}
int main()
{
  bnode root = newNode(1);
     root->left = newNode(2);
     root->left->left = newNode(4);
    root->left->right = newNode(5);
  root->right = newNode(6);

 toSumTree(root);
 inorder(root);
return 0;
}
