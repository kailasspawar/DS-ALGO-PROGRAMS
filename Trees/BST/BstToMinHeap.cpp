#include<iostream>
#include"bst.h"
#include<vector>
using namespace std;
void intrav(node root,vector<int>&v)
{
  if(!root)
   return;

  intrav(root->left,v);
    v.push_back(root->data);
  intrav(root->right,v);
}
void pretrav(node root,vector<int>&v)
{
  static int i = 0;
 if(!root)
   return;
 
 root->data = v[i++];
 pretrav(root->left,v);
 pretrav(root->right,v);
}
void convertToMinHeap(node root)
{
  vector<int>v;

  intrav(root,v);
  
  pretrav(root,v);
}

int main()
{
  node root = NULL;
    root = insert(root,4);
       insert(root,2);
       insert(root,6);
       insert(root,1);
       insert(root,3);
       insert(root,5);
       insert(root,7);
   convertToMinHeap(root);
  inorder(root);
 return 0;
}

