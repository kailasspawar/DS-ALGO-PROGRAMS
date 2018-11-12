#include<iostream>
#include"bst.h"
using namespace std;

node removeLeaf(node root)
{
  if(!root)
   return NULL;

  if(!root->left && !root->right)
  {
    delete root;
    return NULL;
  }
 root->left =  removeLeaf(root->left);
   root->right = removeLeaf(root->right);

  return root;
}

int main()
{
  node root = NULL;
  root = insert(root,17);
    insert(root,12);
    insert(root,7);
    insert(root,14);
    insert(root,20);
    insert(root,19);
    insert(root,22);

  root = removeLeaf(root);
  inorder(root);
    cout<<endl;
 return 0;
}
