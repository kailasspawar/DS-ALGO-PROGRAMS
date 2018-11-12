#include<iostream>
using namespace std;

struct node
{
  int data;
 node *left ,*right;
};
typedef struct node *bnode;

bnode newNode(int n)
{
  bnode newnode = new node ();
  newnode->data = n;
  newnode->left = newnode->right = NULL;
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
