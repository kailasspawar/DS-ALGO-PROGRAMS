#include<iostream>
#include"Bintree.h"
using namespace std;

void treeCopy(bnode &root)
{
  if(!root)
   return ;

  treeCopy(root->left);
     treeCopy(root->right);
  bnode newnode = newNode(root->data);
  if(root->left)
  {
   bnode temp = root->left;
   root->left = newnode;
     newnode->left = temp;
  }
  else
    root->left = newnode;

 }

 int main()
 {
   bnode root = newNode(6);
      root->left = newNode(7);
    root->right = newNode(8);
  root->left->left = newNode(11);
    root->left->right = newNode(22);
    treeCopy(root);
  inorder(root);
  cout<<endl;
   return 0;
 }
