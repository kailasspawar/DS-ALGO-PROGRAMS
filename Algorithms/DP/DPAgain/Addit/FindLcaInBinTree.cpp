#include<iostream>
#include"bst.h"
using namespace std;

bnode findLcaUtil(bnode root,int n1,int n2,bool &v1,bool &v2)
{
  if(!root)
   return NULL;

  if(root->data == n1)
  {
    v1 = true;
   return root;
  }
  if(root->data == n2)
  {
   v2 = true;
   return root;
  }

  bnode left_lca = findLcaUtil(root->left,n1,n2,v1,v2);
  bnode right_lca = findLcaUtil(root->right,n1,n2,v1,v2);
 if(left_lca && right_lca)
  return root;

 return left_lca ? left_lca : right_lca;
}
bool find(bnode root,int k)
{
  if(!root) 
   return false;
 
  if(root->data == k || find(root->left,k) || find(root->right,k))
   return true;
 return false;
}
bnode findLca(bnode root,int n1,int n2)
{
 if(!root)
   return NULL;
 bool v1 = true,v2 = true;
 bnode lca = findLcaUtil(root,n1,n2,v1,v2);

 if(v1 && v2 || v1 && find(lca,n2) || v2 && find(lca,n1))
  return lca;

 return  NULL;
}

int main() 
{
   bnode root = newNode(10);
    root->left = newNode(3);
   root->right = newNode(6);
  root->left->left = newNode(11);
 root->left->right = newNode(9);
     root->right->right = newNode(5);
    root->right->left = newNode(7);
  bnode lca = findLca(root,10,11);
 lca ? cout<<"Lca is "<<lca->data<<endl : cout<<"No lca found\n";
return 0;
}
