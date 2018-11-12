#include<iostream>
#include"bst.h"
using namespace std;

int countnodes(bnode root)
{
  if(!root)
   return 0;

 return 1 + countnodes(root->left) + countnodes(root->right);
}
bool isCompleteTree(bnode root,int index,int count)
{
  if(!root)
   return true;
  if(index >= count)
    return false;

 return isCompleteTree(root->left,2*index+1,count) 
    && isCompleteTree(root->right,2*index+2,count);
}

int main()
{
  bnode root = newNode(1);
     root->left = newNode(2);
    root->right = newNode(3);
  root->left->left = newNode(4)  ;
     root->left->right = newNode(5);
   int index = 0;
     int count = countnodes(root);
  isCompleteTree(root,index,count) ? cout<<"Yes given bintree is Complete\n" :
                                     cout<<"No given bintree is not complete tree\n";
  return 0;
}

