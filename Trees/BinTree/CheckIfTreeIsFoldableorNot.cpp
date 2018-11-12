#include<iostream>
#include"Bintree.h"
using namespace std;
bool isFoldable(bnode r1,bnode r2);
bool checkFoldable(bnode root)
{
  if(!root)
    return true;

  return isFoldable(root->left,root->right);
}

bool isFoldable(bnode r1,bnode r2)
{
  if(!r1&&!r2)
   return true;

  if(!r1 || !r2)
    return false;

  return (isFoldable(r1->left,r2->right)&&
     isFoldable(r1->right,r2->left));
}

int main()
{
  bnode root = newNode(10);
    root->left = newNode(7);
      root->left->left = newNode(9);
    root->right = newNode(12);
      root->right->right = newNode(21);
  checkFoldable(root) ? cout<<"Given tree is Foldable\n" :
     cout<<"Given tree is NOT foldable\n";

  return 0;
}
