#include<iostream>
#include"bt.h"
using namespace std;

void rightView(bnode root,int level,int &maxlevel)
{
  if(!root)
   return;

  if(maxlevel < level)
  {
    cout<<root->data<<" ";
    maxlevel = level;
  }
 rightView(root->right,level+1,maxlevel);
   rightView(root->left,level+1,maxlevel);
}
void leftView(bnode root,int level,int &maxlevel)
{
  if(!root)
   return ;

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
  bnode root = newNode(1);
     root->left = newNode(2);
   root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right  = newNode(5);
 root->right->left = newNode(6);
 root->right->right = newNode(7);
   root->right->right->left = newNode(8);
 int maxlevel = 0;
  rightView(root,1,maxlevel);
 maxlevel = 0;
 cout<<endl;
  leftView(root,1,maxlevel);
  cout<<endl;
 return 0;
}
