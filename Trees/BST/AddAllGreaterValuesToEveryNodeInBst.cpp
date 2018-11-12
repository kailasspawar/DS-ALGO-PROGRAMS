#include<iostream>
#include"bst.h"
using namespace std;

void modifyBst(node root,int &sum)
{
 if(root)
 {
   modifyBst(root->right,sum);

   sum = sum + root->data;
   root->data = sum;

   modifyBst(root->left,sum);
 }
}

int main()
{
  node root = NULL;
  root = insert(root,50);
        insert(root,30);
        insert(root,70);
        insert(root,20);
        insert(root,40);
        insert(root,60);
        insert(root,80);
   int sum = 0;	
	modifyBst(root,sum);
   inorder(root);
 cout<<endl;
 return 0;
}
