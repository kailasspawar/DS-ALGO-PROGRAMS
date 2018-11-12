#include<iostream>
#include"bst.h"
using namespace std;

void kthSmallest(bnode root,int &k,int &sm)
{
  if(root)
  {
    kthSmallest(root->left,k,sm);
    k--;
    if(k == 0)
     sm = root->data;
    kthSmallest(root->right,k,sm);
  }
}

int main()
{
  bnode root = newNode(5);
    root->left = newNode(4);
   root->left->left = newNode(2);
  root->right = newNode(7);
  root->right->right = newNode(10);
  root->right->left = newNode(6);
     
  root->right->right->right = newNode(15);

  int sm = -1 , k = 4;
   kthSmallest(root,k,sm);
  cout<<sm<<endl;
 return 0;
}
