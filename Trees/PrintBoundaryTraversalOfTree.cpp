#include<iostream>
#include"bint.h"
using namespace std;

void printLeftBoundary(bnode root)
{
   if(!root)
    return ;
    if(root->left || root->right)
     cout<<root->data<<" ";
   if(root->left) 
     printLeftBoundary(root->left);
   else if(root->right)
     printLeftBoundary(root->right);
}
void printLeafNodes(bnode root)
{
  if(!root)
    return ;
  if(!root->left&&!root->right)
   cout<<root->data<<" ";
  printLeafNodes(root->left);
    printLeafNodes(root->right);
}
void printRightBoundary(bnode root)
{
  if(!root)
    return ;
  if(root->right)
  {
    printRightBoundary(root->right);
    cout<<root->data<<" ";
  }
  else if(root->left)
  {
   printRightBoundary(root->left);
   cout<<root->data<<" ";
  }
}
void printBoundary(bnode root)
{
  if(!root) 
    return;
  cout<<root->data<<" ";
  printLeftBoundary(root->left);
  printLeafNodes(root);
  printRightBoundary(root->right);
}
int main()
{
  bnode root = newNode(20);
     root->left = newNode(8);
     root->left->left = newNode(4);
     root->left->right = newNode(12);
     root->left->left->right = newNode(6);
     root->left->left->right->left = newNode(9);
     root->right = newNode(87);
       root->right->right = newNode(10);
   printBoundary(root);
   cout<<endl;
  return 0;
}
    
