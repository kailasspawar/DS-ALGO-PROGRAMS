#include<iostream>
#include"bint.h"
using  namespace std;

void leftView(bnode root,int level,int &maxlevel)
{
  if(!root)
   return;

  if(maxlevel < level)
  {
    cout<<root->data<<" ";
    maxlevel = level;
  }
 leftView(root->left,level+1,maxlevel);
    leftView(root->right,level+1,maxlevel);
}

int main()
{
  bnode root =newNode(1);
     root->left = newNode(2);
    root->right = newNode(3);
  root->left->left = newNode(4);
 root->left->right = newNode(5);
   root->right->right = newNode(6);
 root->left->right->left = newNode(7);
 int max = 0;
 leftView(root,1,max);
return 0;
}
