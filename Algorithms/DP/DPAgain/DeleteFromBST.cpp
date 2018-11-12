#include<iostream>
#include"bt.h"
using namespace std;
bnode minvalNode(bnode root)
{
 bnode curr = root;
 while(curr->left)
  curr = curr->left;
 return curr;
}
bnode deleteNode(bnode root,int data)
{
  if(!root)
   return root;

  if(data < root->data)
   root->left = deleteNode(root->left,data);
  else if(data > root->data)
   root->right = deleteNode(root->right,data);
  else
  {
    if(!root->left)
    {
      bnode temp = root->right;
      delete [] root;
      return temp;
    }
    else if(!root->right)
    {
      bnode temp = root->left;
      delete [] root;
      return temp;
    }

   bnode temp = minvalNode(root->right);
   
   root->data = temp->data;
   root->right = deleteNode(root->right,temp->data);
  }
 return root;
}

int main()
{
  bnode root = newNode(7);
     root->left = newNode(5);
    root->left->left = newNode(3);
   root->left->right = newNode(6);
  root->right = newNode(10);
  root->right->left = newNode(8);
//  root->right->right = newNode(12);
  inorder(root);
  cout<<endl;
  root = deleteNode(root,6);
 inorder(root);
 cout<<endl;
return 0;
}
