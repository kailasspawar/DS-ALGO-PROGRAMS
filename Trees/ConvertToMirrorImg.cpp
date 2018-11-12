#include<iostream>
#include"bint.h"
using namespace std;

void mirror(bnode root)
{
  if(!root)
   return ;
  
  if(root->left)
    mirror(root->left);
  if(root->right)
    mirror(root->right);

  bnode temp = root->left;
   root->left = root->right;
   root->right = temp;
}

int main()
{
  bnode root = newNode(1);
     root->left = newNode(2);
       root->right = newNode(5);
     root->left->left = newNode(3);
     root->left->right = newNode(4);
    root->right->left = newNode(9);
  mirror(root);
 inorder(root);
    return 0;
}
