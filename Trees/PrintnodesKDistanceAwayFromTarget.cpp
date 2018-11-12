#include<iostream>
#include"bint.h"
using namespace std;

void printNodesDown(bnode root,int k)
{
  if(!root || k < 0)
     return;

  if(k == 0)
  {
    cout<<root->data<<endl;
    return ;
  }

  printNodesDown(root->left,k-1);
      printNodesDown(root->right,k-1);
}

int printNodesKDist(bnode root,bnode target,int k)
{
 if(!root)
   return -1;

 if(root == target)
 { 
   printNodesDown(root,k);
   return 0;
 }
 
 int dl = printNodesKDist(root->left,target,k);

 if(dl != -1)
 {
   if(dl + 1 == k)
    cout<<root->data<<endl;
   else
     printNodesDown(root->right,k-dl-2);

  return 1 + dl;
 }
 int dr = printNodesKDist(root->right,target,k);
 if(dr != -1)
 {
   if(dr + 1 == k)
    cout<<root->data<<endl;
   else
    printNodesDown(root->left,k);

   return 1 + dr;
 }
 return -1;
}

int main()
{
  bnode root = newNode(20);
     root->left = newNode(8);
    root->right = newNode(22);
   root->left->left = newNode(4);
   root->left->right = newNode(12);
   root->left->right->left = newNode(10);
   root->left->right->right = newNode(14);
   int  k = 2;
      bnode target = root->left;
   printNodesKDist(root,target,k);
  return 0;
}


