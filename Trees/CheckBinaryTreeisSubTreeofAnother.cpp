#include<iostream>
#include"bint.h"
using namespace std;

bool isSubTreeUtil(bnode r1,bnode r2)
{
  if(!r1 && !r2)
     return true;
  if(!r1 || !r2)
    return false;

 return (r1->data == r2->data && isSubTreeUtil(r1->left,r2->left)
         && isSubTreeUtil(r1->right,r2->right));
}

bool isSubTree(bnode r1,bnode r2)
{
  if(!r2)
    return true;
  if(!r1)
    return false;

   if(isSubTreeUtil(r1,r2))
      return true;

  return isSubTree(r1->left,r2) ||
           isSubTree(r1->right,r2);
}

int main()
{
    bnode r1 = newNode(26); 
    r1->left = newNode(10);
      r1->left->left = newNode(4);
      r1->left->left->right = newNode(30);
        r1->left->right = newNode(6);
       r1->right = newNode(3);
          r1->right->right = newNode(7);

    bnode r2 = newNode(4);
     r2->right = newNode(30);

   isSubTree(r1,r2) ? cout<<"Is Subtree\n" : cout<<"Not a SubTree\n";

  return 0;
}
