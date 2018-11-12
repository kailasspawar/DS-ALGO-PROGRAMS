#include<iostream>
#include"bint.h"
using namespace std;

void rightView(bnode root,int level,int &maxlev)
{
  if(!root)
    return;

  if(maxlev < level)
  {
    cout<<root->data<<" ";
    maxlev = level;
  }
 rightView(root->right,level+1,maxlev);
   rightView(root->left,level+1,maxlev);
}

int main()
{
  bnode root = newNode(11);
     root->left = newNode(12);
   root->right = newNode(13);
  root->left->left = newNode(14);
 root->right->right = newNode(15);
 root->right->right->left = newNode(19);
 root->right->left = newNode(16);
 int max = 0;
 rightView(root,1,max);
 cout<<endl;
return 0;
}
