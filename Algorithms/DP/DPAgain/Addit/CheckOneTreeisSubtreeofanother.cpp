#include<iostream>
#include"bst.h"
using namespace std;

bool areIdentical(bnode a,bnode b)
{
  if(!a && !b)
   return true;
  if(!a || !b) 
   return false;

 return (a->data == b->data && areIdentical(a->left,b->left)
          && areIdentical(a->right,b->right));
}

bool isSubtree(bnode T,bnode S)
{
  if(!S)
    return true;
  if(!T)
   return false;

  if(areIdentical(T,S))
   return true;

 return isSubtree(T->left,S) || isSubtree(T->right,S);
}
int main()
{
   bnode root = NULL;
  root = newNode(6);
    root->left = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
   root->right = newNode(1);
  root->right->right = newNode(6);

  bnode r1 = newNode(2);
    r1->left = newNode(9);
   r1->right = newNode(4);

  isSubtree(root,r1) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}

