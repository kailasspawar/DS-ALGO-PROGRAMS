#include<iostream>
#include"bst.h"
using namespace std;

bnode lca(bnode root,int n1,int n2)
{
	if(!root)
		return NULL;

	if(root->data==n1 || root->data == n2)
		return root;

	bnode left_lca = lca(root->left,n1,n2);
	bnode right_lca = lca(root->right,n1,n2);

	if(left_lca && right_lca)
	  return root;
	return left_lca ? left_lca : right_lca;
}

int findLevel(bnode root,int k,int level)
{
	if(!root)
		return -1;
	if(root->data == k)
		return level;

	int left = findLevel(root->left,k,level+1) ;
	if(left == -1)
		return findLevel(root->right,k,level+1);
	return left;
}
int findDistance(bnode root,int a,int b)
{
	if(!root)
		return 0;
	bnode lca1 = lca(root,a,b);
	int d1 = findLevel(lca1,a,0);
	int d2 = findLevel(lca1,b,0);
	return d1+d2;
}

int main()
{
	bnode root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->right->left->right = newNode(8);
	cout << "Dist(4, 5) = " << findDistance(root, 4, 5);
	cout << "\nDist(4, 6) = " << findDistance(root, 4, 6);
	cout << "\nDist(3, 4) = " << findDistance(root, 3, 4);
	cout << "\nDist(2, 4) = " << findDistance(root, 2, 4);
	cout << "\nDist(8, 5) = " << findDistance(root, 8, 5);
	cout<<endl;
	return 0;
}
