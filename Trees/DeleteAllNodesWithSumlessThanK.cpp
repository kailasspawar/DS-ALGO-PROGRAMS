#include<iostream>
#include"bint.h"
using namespace std;

bnode deleteNodes(bnode root,int sum)
{
	if(!root)
		return NULL;

      root->left = deleteNodes(root->left,sum - root->data);
	root->right = deleteNodes(root->left,sum - root->data);
	if(!root->left && !root->right)
	{
		if(root->data < sum)
		{
		    free(root);
			return NULL;
		}
	}
	return root;
}
void print(bnode root)
{
  if(root)
  {
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
  }
}
int main()
{
	int k = 45;
	bnode root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);
	root->left->right->left = newNode(12);
	root->right->right->left = newNode(10);
	root->right->right->left->right = newNode(11);
	root->left->left->right->left = newNode(13);
	root->left->left->right->right = newNode(14);
	root->left->left->right->right->left = newNode(15);
      root = deleteNodes(root,k);
       print(root);
	return 0;
}
