#include<iostream>
#include"Bintree.h"
using namespace std;

int func(bnode root)
{
  int val = 0;
  if(root)
  {
    if(!root->left)
      val = 1;
    else
      val = func(root->left);
    val = val + func(root->right);
  }
 return val;
}

int main()
{
  bnode root = NULL;
  root = newNode(1);
      root->left = newNode(2);
      root->right = newNode(3);
   root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
//  root->right->right = newNode(7);
 cout<<func(root)<<endl;
 return 0;
}
  
