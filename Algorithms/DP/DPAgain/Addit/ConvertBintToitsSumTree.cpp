#include<iostream>
#include"bst.h"
using namespace std;

int toSumtree(bnode root)
{
 if(!root) return 0;
  
 int old_val  = root->data;
 root->data = toSumtree(root->left) + toSumtree(root->right);

 return root->data + old_val;
}
int main()
{
 bnode root = newNode(10);
    root->left = newNode(4);
   root->right  = newNode(3);
 root->left->left = newNode(5);
   root->left->right = newNode(2);
  root->right->left = newNode(1);
 root->right->right = newNode(3);
toSumtree(root);
inorder(root);
cout<<endl;
return 0;
}
