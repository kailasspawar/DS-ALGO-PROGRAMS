#include<iostream>
#include"Bintree.h"
using namespace std;

int toSumTree(bnode root)
{
  if(root==NULL)
    return 0;

  int old_val = root->data;

  root->data = toSumTree(root->left) + toSumTree(root->right);

  return root->data + old_val;
}

int main()
{
  bnode root = NULL;
    root = newNode(10); 
    root->left = newNode(-2); 
    root->right = newNode(6); 
    root->left->left = newNode(8); 
    root->left->right = newNode(-4); 
    root->right->left = newNode(7); 
    root->right->right = newNode(5); 

    toSumTree(root);

    inorder(root);

   return 0;
 }
