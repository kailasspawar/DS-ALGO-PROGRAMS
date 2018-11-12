#include<iostream>
#include"bint.h"
using namespace std;

bool isLeaf(bnode root)
{
  if(!root)
    return false;
  if(!root->left && !root->right)
    return true;
return false;
}

bool isSumTree(bnode root)
{
  int ls;
     int rs;
  if(!root || isLeaf(root))
    return true;
 if(isSumTree(root->left) && isSumTree(root->right))
 {
    if(!root->left)
      ls = 0;
    else if(isLeaf(root->left))
     ls = root->left->data;
    else
     ls = 2 * (root->left->data);

    if(!root->right)
      rs = 0;
    else if(isLeaf(root->right))
      rs = root->right->data;
    else
      rs = 2 * (root->right->data);

   return root->data == ls + rs;
  }
 return false;
}

int main()
{
  bnode root = newNode(24);
    root->left = newNode(10);
   root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(6);
  root->right->right = newNode(3);

 isSumTree(root) ? cout<<"Its a SumTree\n" : cout<<"Not a SumTree\n";

 return 0;
}

