#include<iostream>
#include"bint.h"
using namespace std;

void convert(bnode root)
{
  if(!root)
    return;

  convert(root->left);
     convert(root->right);

 if(root->left && root->right)
  root->data = (root->left->data) &
               (root->right->data);
}

int main()
{
  bnode root = newNode(1);
     root->left = newNode(1);
       root->right = newNode(0);
    root->left->left = newNode(0);
      root->left->right = newNode(1);
    root->right->left = newNode(1);
    root->right->right = newNode(1);
  cout<<"Before conversion Tree is \n";
  inorder(root);
  cout<<endl;
  convert(root);
  cout<<"After conversion Tree is \n";
  inorder(root);
  cout<<endl;
 return 0;
}
   
