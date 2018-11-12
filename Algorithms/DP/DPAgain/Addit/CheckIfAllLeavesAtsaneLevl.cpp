#include<iostream>
#include"bst.h"
using namespace std;

bool checkUtil(bnode root,int level,int &leaflevel)
{
  if(!root)
    return true;

  if(!root->left && !root->right)
  {
    if(leaflevel == 0)
    {
     leaflevel = level;
       return true;
    }
   return leaflevel == level;
  }
 return checkUtil(root->left,level+1,leaflevel)&&
     checkUtil(root->right,level+1,leaflevel);
}
bool check(bnode root)
{
  int leaflevel = 0,level = 0;
  return checkUtil(root,level,leaflevel);
}
int main()
{
  bnode root = newNode(1);
    root->left = newNode(2);
  root->right = newNode(3);
 root->left->left = newNode(4);
 root->left->left->right = newNode(33);
   root->right->left = newNode(6);
  root->right->right = newNode(5);
  check(root) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
