#include<iostream>
#include"Bintree.h"
using namespace std;

bnode findLCA(bnode root,int n1,int n2,bool &v1,bool &v2)
{
	if(!root)
		return NULL;

	if(root->data == n1)
	{
		v1 = true;
		return root;
	}
	if(root->data == n2)
	{
		v2 = true;
		return root;
	}

	bnode left_lca = findLCA(root->left,n1,n2,v1,v2);
	bnode right_lca = findLCA(root->left,n1,n2,v1,v2);

	if(left_lca && right_lca)
		return root;

	return (left_lca) ? left_lca : right_lca;
}
bool find(bnode root,int k)
{
	if(!root)
		return false;

	if(root->data == k)
		return true;

	return (find(root->left,k)||find(root->right,k));
}
bnode findLCA1(bnode root,int n1,int n2)
{
	bool v1 = false, v2 = false;

	bnode temp = findLCA(root,n1,n2,v1,v2);

	if(v1 && v2 || v1 && find(temp,n2) || v2 && find(temp,n1))
		return temp;
	return NULL;
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
	bnode lca =  findLCA1(root, 4, 5);
	if (lca != NULL)
		cout << "LCA(4, 5) = " << lca->data<<endl;
	else
		cout << "Keys are not present ";

	lca =  findLCA1(root, 4, 10);
	if (lca != NULL)
		cout << "nLCA(4, 10) = " << lca->data;
	else
		cout << "Keys are not present \n";

	return 0;
}


