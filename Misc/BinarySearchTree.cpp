#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *left;Node* right;
};

typedef struct Node *tnode;

tnode insert(tnode root,int ele)
{
	if(root==NULL)
	{
		tnode newnode = new Node();
		newnode->data = ele;
		newnode->left=newnode->right = NULL;
		return newnode;
	}
	if(ele < root->data)
		root->left = insert(root->left,ele);
	else if(ele > root->data)
		root->right = insert(root->right,ele);

	return root;
}
void inorder(tnode root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
tnode minValueNode(tnode node)
{
	tnode current = node;
	while (current->left != NULL)
		current = current->left;
	return current;
}

tnode deleteNode(tnode root, int key)
{
	if (root == NULL) return root;
	if (key < root->data)
		root->left = deleteNode(root->left, key);
	else if (key > root->data)
		root->right = deleteNode(root->right, key);
	else
	{
		if (root->left == NULL)
		{
			tnode temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			tnode temp = root->left;
			free(root);
			return temp;
		}
	        tnode  temp = minValueNode(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}

int main()
{
	tnode root = NULL;
	root = insert(root,25);
	root = insert(root,15);
	root = insert(root,20);
	root = insert(root,35);
	root = insert(root,30);
	root = insert(root,40);
	root = insert(root,13);
	inorder(root);
	cout<<"\n";
      root = deleteNode(root,15);
	inorder(root);
	cout<<"\n";

	return 0;
}
