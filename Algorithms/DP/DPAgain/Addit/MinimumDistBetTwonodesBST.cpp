#include<iostream>
#include"bst.h"
using namespace std;
bnode insert(bnode root,int data)
{
 if(!root)
   return newNode(data);

 if(data < root->data)
  root->left = insert(root->left,data);
 else
  root->right = insert(root->right,data);

 return root;
}

int distfromroot(bnode root,int x)
{
  if(root->data == x)
   return 0;
  if(root->data > x)
   return 1+distfromroot(root->left,x);
 return 1+distfromroot(root->right,x);
}
int distbet2(bnode root,int a,int b)
{
  if(!root)
    return 0;
   
  if(root->data > a && root->data > b)
   return distbet2(root->left,a,b);

  if(root->data < a && root->data < b)
   return distbet2(root->right,a,b);

  if(root->data >= a && root->data <= b)
   return distfromroot(root,a) + distfromroot(root,b);
}
int distance(bnode root,int a,int b)
{
  if(a > b) 
   swap(a,b);
 return distbet2(root,a,b);
}
int main()
{
  bnode root = NULL;
  root = insert(root,5);
     insert(root,10);
     insert(root,7);
     insert(root,2);
     insert(root,15);
     insert(root,12);
     insert(root,9);
     insert(root,1);
    inorder(root);
   cout<<endl;
  cout<<distance(root,1,7)<<endl;
 return 0;
}

