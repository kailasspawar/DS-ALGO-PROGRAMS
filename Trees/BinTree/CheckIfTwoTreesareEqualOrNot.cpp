#include<iostream>
#include"Bintree.h"
using namespace std;

bool checkEqual(bnode root1,bnode root2)
{
  if(!root1 && !root2)
    return true;
  
  if(root1&&!root2 || !root1&&root2)
    return false;

  checkEqual(root1->left,root2->left);
    if(root1->data != root2->data)
      return false;
  checkEqual(root1->right,root2->right);
}

int main()
{
  bnode root1 = NULL;
     root1 = newNode(5);
       root1->left = newNode(20);
          root1->right=newNode(30);
	root1->left->left = newNode(11);
  bnode root2 = NULL;
     root2 = newNode(5);
       root2->left = newNode(20);
          root2->right=newNode(30);
	root2->left->left = newNode(11);
     (checkEqual(root1,root2))?
       cout<<"Given Trees are Identical\n" : cout<<"Given Trees are NOT Identical\n";
    return 0;
}

