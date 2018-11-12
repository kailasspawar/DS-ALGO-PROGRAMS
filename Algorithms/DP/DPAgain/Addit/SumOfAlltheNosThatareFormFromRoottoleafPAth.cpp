#include<iostream>
using namespace std;
struct node 
{
	int data;
	node *left,*right;
};

typedef struct node *bnode;

bnode newNode(int data)
{
	bnode newnode = new node();
	newnode->data = data;
	newnode->left=newnode->right = NULL;
	return newnode;
}

int treeSumPath(bnode root,int val)
{
	if(!root)
		return 0;

	val = (val*10 + root->data);

	if(!root->left&&!root->right)
		return val;

	return treeSumPath(root->left,val) + treeSumPath(root->right,val);
}
int treePathsSum(bnode root)
{
	return treeSumPath(root,0);
}
int main()
{
	bnode root = newNode(6);
	root->left        = newNode(3);
	root->right       = newNode(5);
	root->left->left  = newNode(2);
	root->left->right = newNode(5);
	root->right->right = newNode(4);
	root->left->right->left = newNode(7);
	root->left->right->right = newNode(4);
	cout<<"Sum of all paths is"<<treePathsSum(root)<<endl;
	return 0;
}
