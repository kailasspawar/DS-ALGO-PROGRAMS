#include<iostream>
#include"bint.h"
using namespace std;

bool printPath(bnode root,int val)
{
  if(!root)
    return false;

  if(root->data == val)
   {
    cout<<root->data<<" ";
    return true;
   }

  if(printPath(root->left,val) || 
  	printPath(root->right,val))
	{
	cout<<root->data<<" ";
	 return true;
   }
 
 return false;
}

int main()
{
 bnode root = newNode(1);
    root->left = newNode(2);
   root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
 
 printPath(root,5);
cout<<endl;
return 0;
}

