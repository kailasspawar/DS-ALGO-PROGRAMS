#include<iostream>
#include"bst.h"
#include<bits/stdc++.h>
using namespace std;
void intrav(node root,unordered_set<int>&m)
{
	if(!root)
		return;

	intrav(root->left,m);
	m.insert(root->data);
	intrav(root->right,m);
}
void printIntersection(node root,unordered_set<int>&m)
{
	if(!root)
		return;
	printIntersection(root->left,m);

	if(m.find(root->data) != m.end())
		cout<<root-data<<" ";

	printIntersection(root->right,m);
}
void intersection(node root1,node root2)
{
	unordered_set<int>m;
	intrav(root1,m);
	
	printIntersection(root2,m);
}

int main()
{
	node root1 = NULL;
	root1 = insert(root1, 5);
	root1 = insert(root1, 1);
	root1 = insert(root1, 10);
	root1 = insert(root1,  0);
	root1 = insert(root1,  4);
	root1 = insert(root1,  7);
	root1 = insert(root1,  9);

	// Create second tree as shown in example
	node root2 = NULL;
	root2 = insert(root2, 10);
	root2 = insert(root2, 7);
	root2 = insert(root2, 20);
	root2 = insert(root2, 4);
	root2 = insert(root2, 9);

	cout << "Tree 1 : ";
	inorder(root1);
	cout << endl;

	cout << "Tree 2 : ";
	inorder(root2);

	cout << "\nCommon Nodes: ";
	intersection(root1, root2);

	return 0;
}
