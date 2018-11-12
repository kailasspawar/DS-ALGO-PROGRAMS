#include<iostream>
using namespace std;
struct node
{
 int data;
   node *left,*right,*nextRight;
};

typedef struct node *bnode;

bnode newNode(int data)
{
 bnode newnode = new node();
   newnode->data = data;
  newnode->left = newnode->right = NULL;
 return newnode;
}

void connectUtil(bnode root);
bnode getNextRight(bnode root);

void connect(bnode root)
{
 if(!root) return;
 root->nextRight = NULL;
 connectUtil(root);
}

void connectUtil(bnode root)
{
  if(!root) 
     return ;
  if(root->nextRight)
   connectUtil(root->nextRight);
  if(root->left)
  {
     if(root->right)
     {
       root->left->nextRight = root->right;
       root->right = getNextRight(root);
     }
     else
       root->left->nextRight = getNextRight(root);
     connectUtil(root->left);
  }
  else if(root->right)
  {
    root->right->nextRight = getNextRight(root);
    connectUtil(root->right);
  }
  else
    connectUtil(getNextRight(root));
}

bnode getNextRight(bnode root)
{
  bnode temp = root;
  while(temp)
  {
    if(temp->left)
     return temp->left;
    if(temp->right)
     return temp->right;

   temp = temp->nextRight;
  }
 return NULL;
}

int main()
{
  bnode root = newNode(10) ;
      root->left = newNode(5);
        root->right = newNode(7);
   root->left->left = newNode(1);
   root->left->right = newNode(2);
  connect(root);
  cout<<root->left->nextRight->data<<endl;
 return 0;
}




