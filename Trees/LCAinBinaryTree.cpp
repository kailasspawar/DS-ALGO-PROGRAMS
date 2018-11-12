#include<iostream>
#include"bint.h"
using namespace std;

bnode lcaUtil(bnode root,int n1,int n2,bool &v1,bool &v2)
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
 
  bnode left_lca = lcaUtil(root->left,n1,n2,v1,v2);
     bnode right_lca = lcaUtil(root->right,n1,n2,v1,v2);
 
 if(left_lca && right_lca)
   return root;

 return left_lca ? left_lca : right_lca;
}

bool find(bnode root,int k)
{
  if(!root)
    return false;

  return (root->data == k || find(root->left,k) || 
                             find(root->right,k));
}
bnode lca(bnode root,int n1,int n2)
{
  if(!root)
    return NULL;
 bool v1 = false, v2 = false;
  bnode lca = lcaUtil(root,n1,n2,v1,v2);

  return (v1 && v2 && v1&&find(lca,n2) || v2&&find(lca,n1)) ? lca : NULL;
}

int main()
{
 bnode root = newNode(1);
   root->left = newNode(2);
   root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
 root->right->left = newNode(6);
 root->right->right = newNode(7);
 int n1 = 4 , n2 = 6;
 bnode lca1 = lca(root,n1,n2);
   lca1!=NULL ? cout<<lca1->data<<endl : cout<<"-1";
 return 0;
}

