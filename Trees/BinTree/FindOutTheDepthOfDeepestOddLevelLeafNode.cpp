#include<iostream>
#include"Bintree.h"
using  namespace std;

int maxDepth(bnode root,int level)
{
  if(!root)
   return 0;

  if(!root->left && !root->right&&level&1)
    return level;

  return max(maxDepth(root->left,level+1),
         maxDepth(root->right,level+1));
}

int main()
{
  bnode root = newNode(1);
     root->left  = newNode(2);
        root->left->left = newNode(4);
    root->right = newNode(3);
       root->right->left = newNode(5);
         root->right->left->right = newNode(7);
      root->right->left->right->left = newNode(9);
     root->right->right = newNode(6);
    root->right->right->right = newNode(10);
    root->right->right->right->right = newNode(11);
    root->right->right->right->right->left = newNode(10);

  cout<<maxDepth(root,0)<<endl;

  return 0;
}
        

   
