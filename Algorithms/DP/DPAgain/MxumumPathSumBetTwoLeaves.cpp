#include<iostream>
#include"bt.h"
#include<climits>
using namespace std;

int maxPathSum(bnode root,int &res)
{
	if(!root)
		return 0;
	if(!root->left && !root->right)
		return root->data;

	int ls = maxPathSum(root->left,res);
	int rs = maxPathSum(root->right,res);

	if(root->left && root->right)
	{
		res = max(res,ls+rs+root->data);

		return max(ls,rs) + root->data;
	}
	return  (!root->left) ? rs+root->data :
		ls+root->data;
}
int maxPathSum1(bnode root)
{
  int res = INT_MIN;
  maxPathSum(root,res);
  return res;
}
int main()
{
	bnode root = newNode(-15);
	root->left = newNode(5);
	root->right = newNode(6);
	root->left->left = newNode(-8);
	root->left->right = newNode(1);
	root->left->left->left = newNode(2);
	root->left->left->right = newNode(6);
	root->right->left = newNode(3);
	root->right->right = newNode(9);
	root->right->right->right= newNode(0);
	root->right->right->right->left= newNode(4);
	root->right->right->right->right= newNode(-1);
	root->right->right->right->right->left= newNode(10);
	cout << "Max pathSum of the given binary tree is "
		<< maxPathSum1(root);
         cout<<endl;
	return 0;
}
