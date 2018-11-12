#include<iostream>
#include"bt.h"
using namespace std;

bool isBST(bnode root)
{
  static bnode prev = NULL;
  if(root)
  {
    if(!isBST(root->left))
      return false;

    if(prev && prev->data >= root->data)
     return false;

    prev = root;

   return isBST(root->right);
  }
 return true;
}

int main()
{
  bnode root = newNode(7);
     root->left = newNode(5);
    root->left->left = newNode(3);
  root->right = newNode(9);
    root->right->left = newNode(8);
  root->right->right = newNode(10);

  isBST(root) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
