#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
 int data;
 Node *left,*right;
};

typedef struct Node *node;

node newNode(int ele)
{
  node newnode = new Node();
  newnode->data = ele;
 newnode->left=newnode->right=NULL;
 return newnode;
}

node insert(node root,int ele)
{
 if(root==NULL)
  return newNode(ele);
 
 if(ele < root->data)
  root->left = insert(root->left,ele);
 else if(ele > root->data)
  root->right = insert(root->right,ele);
}

void inorder(node root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}

