#include<iostream>
#include"bint.h"
using namespace std;

bnode findLca(bnode root,int a,int b)
{
	if(!root)
		return root;

	if(root->data == a || root->data == b)
		return root;

	bnode left = findLca(root->left,a,b);
	bnode right = findLca(root->right,a,b);
       if(left&&right)
         return root;
	return (left) ? findLca(root->left,a,b) : 
		findLca(root->right,a,b);
}

int findLevel(bnode root,int k,int level)
{
	if(!root)
		return -1;

	if(root->data == k)
		return level;

	int left = findLevel(root->left,k,level+1);
	if(left == -1)
		return findLevel(root->right,k,level+1);
	return left;
}

int findDist(bnode root,int a,int b)
{

	bnode lca = findLca(root,a,b);
	int d1 = findLevel(lca,a,0);
	int d2 = findLevel(lca,b,0);
	return d1 + d2;
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
	 bnode node = findLca(root,4,5);
	     cout<<node->data<<endl;
	cout << "Dist(4, 5) = " << findDist(root, 4, 5);
	cout << "\nDist(4, 6) = " << findDist(root, 4, 6);
	cout << "\nDist(3, 4) = " << findDist(root, 3, 4);
	cout << "\nDist(2, 4) = " << findDist(root, 2, 4);
	cout << "\nDist(8, 5) = " << findDist(root, 8, 5);
	return 0;
}

