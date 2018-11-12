#include<iostream>
using namespace std;

struct node
{
 int data;
 node *left,*right;
};

typedef struct node *bnode;

bnode newNode(int data)
{
 bnode newnode = new node();
    newnode->data = data;
    newnode->left=newnode->right = NULL;
 return newnode;
}

void inorder(bnode root)
{
  if(root)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}

