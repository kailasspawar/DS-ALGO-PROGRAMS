#include<iostream>
using namespace std;

struct node
{
   char data;
  node *left,*right,*nextRight;
};
typedef struct node *bnode;
bnode newNode(int data)
{
  bnode newnode = new node();
   newnode->data = data;
   newnode->left = newnode->right = newnode->nextRight = NULL;
  return newnode;
}
void connectUtil(bnode root)
{
  if(!root)
    return ;

  if(root->left)
    root->left->nextRight = root->right;

  if(root->right)
   root->right->nextRight = (root->nextRight) ? 
                            root->nextRight->left : NULL;
   connectUtil(root->left);
      connectUtil(root->right);
}
void connect(bnode root)
{
  if(!root)
    return;

  root->nextRight = NULL;

  connectUtil(root);
}

int main()
{
  bnode root = newNode('A');
      root->left = newNode('B');
     root->right = newNode('C');
    root->left->left = newNode('D');
   root->left->right  = newNode('E');
   root->right->right = newNode('F');
   connect(root);
   cout<<root->left->nextRight->data<<endl;
 return 0;
}
