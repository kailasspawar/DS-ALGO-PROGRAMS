#include<iostream>
#include"bint.h"
using namespace std;

bnode findlca(bnode root,int n1,int n2)
{
  if(!root)
    return root;

  if(root->data == n1 || root->data == n2)
    return root;

  bnode left = findlca(root->left,n1,n2);
      bnode right = findlca(root->right,n1,n2);
  if(left&&right)
    return root;

 return left ? findlca(root->left,n1,n2) :
               findlca(root->right,n1,n2);
}
bool printPath(bnode root,int lca)
{
  if(!root )
    return false;
  if(root->data == lca)
  {
    cout<<lca<<" ";
      return true;
  }

  if(printPath(root->left,lca) ||
     printPath(root->right,lca))
    {
      cout<<root->data<<" ";
      return true;
    }
  return false;
}
    
void printCommon(bnode root,int n1,int n2)
{
  bnode lca = findlca(root,n1,n2);
  if(lca)
    printPath(root,lca->data);
  else
    cout<<"not possible\n";
}

int main()
{
  bnode root = newNode(1);
    root->left = newNode(2);
      root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->left->left = newNode(4);
   root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);
  root->right->left->left = newNode(9);
  root->right->left->right = newNode(10);

  printCommon(root,9,7);
   cout<<endl;
 return 0;
}

   
