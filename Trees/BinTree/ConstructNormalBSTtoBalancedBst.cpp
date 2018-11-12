#include<iostream>
#include"Bintree.h"
#include<vector>
using namespace std;

void storeBst(bnode root,vector<bnode>&bnodes)
{
	if(root)
	{
		storeBst(root->left,bnodes);
		bnodes.push_back(root);
		storeBst(root->right,bnodes);
	}
}
bnode builtTree(vector<bnode>&nodes,int start,int end)
{
	if(start > end)
		return NULL;

	int mid = start + (end-start) / 2;
	bnode root = nodes[mid];

	root->left = builtTree(nodes,start,mid-1);
	root->right = builtTree(nodes,mid+1,end);

	return root;
}
bnode convertBalBst(bnode root)
{
	vector<bnode> v;

	storeBst(root,v);
	int n = v.size();
	int start = 0;
	return builtTree(v,start,n-1);
}

int main()
{
	bnode root = newNode(10);
	root->left = newNode(8);
	root->left->left = newNode(7);
	root->left->left->left = newNode(6);
	root->left->left->left->left = newNode(5);
	//   inorder(root);	   
	root = convertBalBst(root);

	cout<<"Inorder traversal of balanced "
		"BST is : \n";
	inorder(root);
	cout<<endl; 
	return 0;
}
