#include<iostream>
#include"Bintree.h"
using namespace std;

void leftView(bnode root,int level,int &minval)
{
 if(root==NULL)
  return ;
 if(minval < level)
 {
  cout<<root->data<<" ";
  minval = level;
 }
 leftView(root->left,level+1,minval);

 leftView(root->right,level+1,minval);

}

int main()
{
  bnode root = NULL;
  root = newNode(12);

  root->left = newNode(10);
  root->right = newNode(30);
  root->right->left = newNode(25);
  root->right->right = newNode(45);
  int maxval = 0;
  leftView(root,1,maxval);

  return 0;
}
 
