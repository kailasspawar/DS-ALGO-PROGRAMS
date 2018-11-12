#include<iostream>
#include"bint.h"
using namespace std;

void deleteTree(bnode root)
{
  if(!root) 
    return ;

  deleteTree(root->left);
     deleteTree(root->right);
  free(root);
}

int main()
{
  bnode root = newNode(10);
     root->left = newNode(20);
        root->right = newNode(30); 
    root->left->left = newNode(40);
   root->left->right = newNode(50);
  root->right->right = newNode(60);
 deleteTree(root);
 root = NULL;
 return 0;
}
