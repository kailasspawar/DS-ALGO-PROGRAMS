#include<iostream>
#include"bst.h"
using namespace std;

node lcs(node root,int n1,int n2)
{
 if(root==NULL)
  return NULL;

 if(root->data > n1 && root->data > n2)
  return lcs(root->left,n1,n2);
 
 if(root->data < n1 && root->data < n2)
  return lcs(root->right,n1,n2);

 return root;
}
int iterativeLcs(node root,int n1,int n2)
{
  while(root)
  {
    if(root->data > n1 && root->data > n2)
      root = root->left;
    else if(root->data < n1 && root->data < n2);
    else
      break;
   }
  return root->data;
}
int main()
{
  node root = newNode(10);
     root->left = newNode(5);
   root->left->left = newNode(2);
   root->left->right = newNode(6);
  root->right = newNode(12);
    root->right->right = newNode(18);

 node temp = lcs(root,2,18);
 cout<<"The lcs is\n";
   cout<<temp->data<<endl;
            cout<<"Lowest comm anchester iterative :"<<iterativeLcs(root,5,18)<<endl;
  return 0;
}


