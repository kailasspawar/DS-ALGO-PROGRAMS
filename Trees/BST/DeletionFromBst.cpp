#include<iostream>
#include"bst.h"
using namespace std;
node minValNode(node root)
{
  while(root->left)
    root = root->left;
  return root;
}
node deleteFromBst(node root,int key)
{
  if(!root)
    return root;

  if(key < root->data)
    root->left = deleteFromBst(root->left,key);
  else if(key > root->data)
    root->right = deleteFromBst(root->right,key);

  else
  {
     if(!root->left)
     {
       node temp = root->right;
       delete root;
       return temp;
     }
     else if(!root->right)
     {
      node temp = root->left;
      delete root;
      return temp;
     }

    node temp = minValNode(root->right);
    root->data = temp->data;

    root->right = deleteFromBst(root->right,temp->data);
 }
return root;
}

int main()
{
  node root = NULL;
    root = insert(root,15);
       insert(root,10);
       insert(root,8);
       insert(root,14);
       insert(root,21);
       insert(root,24);
       insert(root,16);

   inorder(root);
     cout<<endl;
   root = deleteFromBst(root,15);
  inorder(root);
  cout<<endl;
 return 0;
}
