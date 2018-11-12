#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;

struct Node
{
  int data;
  Node *left,*right;
};

Node* newNode(int ele)
{
  Node* newnode = new Node();
  newnode->data = ele;
  newnode->left = NULL;
    newnode->right = NULL;
   return newnode;
}

Node* insert(Node* root,int ele)
{
  if(root==NULL)
    return newNode(ele);

  if(ele < root->data)
   root->left = insert(root->left,ele);
  else if(ele > root->data)
   root->right = insert(root->right,ele);
 return root;
}

void inorder(Node* root)
{
 if(root==NULL) return ;
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}

void levelOrderUsingQ(Node* root)
{
  if(root==NULL)
   return;
  queue<Node*>q;
 
  q.push(root);
 while(q.empty()==false)
 {
   Node* node = q.front();
    q.pop();
   cout<<node->data<<" ";

   if(node->left!=NULL)
    q.push(node->left);
   if(node->right!=NULL)
    q.push(node->right);
 }
cout<<"\n";
}
int main()
{
  Node* root = NULL;
   root = insert(root,20);
     insert(root,15);
     insert(root,10);
     insert(root,19);
     insert(root,25);
     insert(root,30);
     insert(root,35);
   inorder(root);
    cout<<"\n";
  levelOrderUsingQ(root);
  return 0;
}


