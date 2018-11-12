#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
  int data;
  struct node *left,*right;
};

typedef struct node *bnode;

bnode newNode(int ele)
{
  bnode newnode =(struct node *)malloc(sizeof(node));
  newnode->data = ele;
  newnode->left=newnode->right = NULL;
  return newnode;
}

void inorder(bnode root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}
void printLeaves(bnode root)
{
  if(root) 
  {
   printLeaves(root->left);
    if(!(root->left)&&!(root->right))
      cout<<root->data<<" ";

     printLeaves(root->right);
  }
}
void PrintLeftBoundry(bnode root)
{
  if(root)
  {
      if(root->left)
      {
        cout<<root->data<<" ";
	PrintLeftBoundry(root->left);
      }
      else
       if(root->right)
      {
        cout<<root->data<<" ";
	PrintLeftBoundry(root->right);
      }
    }
}
void PrintRightBoundry(bnode root)
{
  if(root)
  {
    if(root->right)
    {
      PrintRightBoundry(root->left);
      cout<<root->data<<" ";
    }
    else if(root->left)
    {
      PrintRightBoundry(root->left);
      cout<<root->data<<" ";
    }
  }
}
void printBoundryNodes(bnode root)
{
  if(root==NULL)
   return ;
  if(root)
  {
    cout<<root->data<<" ";
    PrintLeftBoundry(root->left);

    printLeaves(root->left);
    printLeaves(root->right);

    PrintRightBoundry(root->right);
  }
}

int main()
{
  bnode root = NULL;
  root = newNode(20);
   root->left = newNode(8);
   root->left->right = newNode(12);
  root->left->left = newNode(4);
  root->left->right->left = newNode(10);
  root->left->right->right = newNode(14);
  root->right = newNode(22);
  root->right->right = newNode(25);

  inorder(root);
 cout<<endl;
  cout<<"Leaf nodes are\n";
    printLeaves(root);
   cout<<endl;
 cout<<"The boundray nodes are\n";
  printBoundryNodes(root);
 cout<<endl;
return 0;
}
