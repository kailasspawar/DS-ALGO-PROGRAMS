#include<iostream>
#include"bint.h"
using namespace std;

bnode lca(bnode root,int n1,int n2)
{ 
  if(!root)
     return NULL;
 int i = 0;
  while(root)
  {
   if(root->data > n1 && root->data > n2)
    root = root->left;
   if(root->data < n1 && root->data < n2)
    root  = root->right; 
  else
    break;
  }
 cout<<i<<endl;
 return root;
}
bnode lcaRecursive(bnode root,int n1,int n2)
{
  if(!root)
    return NULL;
  if(root->data > n1 && root->data > n2)
     return lcaRecursive(root->left,n1,n2);
  if(root->data < n1 && root->data  < n2)
    return lcaRecursive(root->right,n1,n2);

  return root;
}
 

int main()
{
  bnode root = newNode(20);
     root->left = newNode(8);
      root->right = newNode(22);
    root->left->left = newNode(4);
     root->left->right = newNode(12);
     root->left->right->left = newNode(10);
     root->left->right->right = newNode(14);

    bnode node = lca(root,10,22);
    cout<<node->data<<endl;
    node = lcaRecursive(root,8,14);
    cout<<node->data<<endl;
  return 0;
 }

