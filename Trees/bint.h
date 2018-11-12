#include<iostream>
#include<cstdlib>
#define null NULL
using namespace std;

struct node
{
 int data;
   node *left,*right;
};

typedef struct node *bnode;

bnode newNode(int data)
{
  bnode newnode = (struct node *)malloc(sizeof(struct node));
   newnode->data = data;
  newnode->left = newnode->right = null;
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

