#include<iostream>
#include"Bintree.h"
using namespace std;

void mirror(bnode root)
{
 if(!root)
   return ;

 else
   {
      mirror(root->left);
      mirror(root->right);

      swap(root->left,root->right);
   }
}

int main()
{
  bnode root = NULL;
     root = newNode(10);
        root->left = newNode(20);
	  root->right = newNode(30);
     root->left->left = newNode(40);
     root->left->right = newNode(50);
   root->left->left->left = newNode(80);
     root->right->left = newNode(60);
     root->right->right = newNode(70);
   cout<<"Before mirror image tree is\n";
      inorder(root);
   cout<<"\nAfter mirror image tree is\n";
     mirror(root);

     inorder(root);
     cout<<endl;
   return 0;
}
