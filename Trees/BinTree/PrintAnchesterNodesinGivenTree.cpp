#include<iostream>
#include"Bintree.h"
using namespace std;

bool printAnchester(bnode root,int target)
{
  if(!root)
  {
    return false;
  }

  if(root->data==target)
    return true;

  if(printAnchester(root->left,target) 
       || printAnchester(root->right,target))
  {
    cout<<root->data<<" ";
    return true;
  }
 return false;
}

int main()
{
  bnode root = newNode(10);
     root->left = newNode(12);
    root->left->left = newNode(14);
   root->left->left->right = newNode(16);
  root->right = newNode(21);
     root->right->left= newNode(5);

  printAnchester(root,16);
    cout<<endl;
  return 0;
}
