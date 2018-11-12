#include<iostream>
#include"bint.h"
using namespace std;

int sizeofTree(bnode root)
{
  if(!root)
    return 0;

  return 1 + sizeofTree(root->left) + sizeofTree(root->right);
}

int main()
{
  bnode root = newNode(10);
       root->left = newNode(20);
     root->right = newNode(30);
   root->left->left = newNode(40);
  root->left->right = newNode(50);
 root->right->left = newNode(60);

  cout<<"Size of Tree :"<<sizeofTree(root)<<endl;
 return 0;
}
