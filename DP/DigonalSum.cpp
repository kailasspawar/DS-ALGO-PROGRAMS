#include<iostream>
#include"bst.h"
#include<map>
#include<vector>
using namespace std;

void digonalSum(bnode root,map<int,int>&m,int hd)
{
	if(!root) 
		return;
	m[hd]+=root->data;
	digonalSum(root->left,m,hd+1);
	digonalSum(root->right,m,hd);
}

void printdigonal(bnode root)
{
	map<int,int>m;
	digonalSum(root,m,0);
	for(auto it = m.begin();it!=m.end();it++)
		cout<<it->second<<" ";
	cout<<endl;
}

int main()
{
	bnode root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(9);
	root->left->right = newNode(6);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->right->left->right = newNode(7);
	root->right->left->left = newNode(12);
	root->left->right->left = newNode(11);
	root->left->left->right = newNode(10);
	printdigonal(root);
	return 0;
}

