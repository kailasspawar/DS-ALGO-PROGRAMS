#include<iostream>
#include"bst.h"

void printKeys(node root,int k1,int k2)
{
  if(root==NULL)
   return ;

  if(k1 < root->data)
   printKeys(root->left,k1,k2);

  if(root->data > k1 && root->data < k2)
   cout<<root->data<<" ";

  if(k2 > root->data)
   printKeys(root->right,k1,k2);

 }

 int main()
 {
  node root = NULL;
  root = newNode(20);
    root->left = newNode(8);
      root->right = newNode(22);
        root->left->left = newNode(4);
	  root->left->right = newNode(12);
     int k1 = 10,k2 = 25;

    printKeys(root,k1,k2);
    cout<<endl;
   return 0;
 }
