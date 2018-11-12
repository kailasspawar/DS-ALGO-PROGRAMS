#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
  int data;
  struct node *left,*right;
};

typedef struct node *bnode;

bnode newNode(int ele)
{
  bnode newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = ele;
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

