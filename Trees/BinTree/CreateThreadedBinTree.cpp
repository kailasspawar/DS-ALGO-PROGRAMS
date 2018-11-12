#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left,*right;

	bool isthreaded;
};

typedef struct node *tnode;

tnode newNode(int data)
{
	tnode newnode = new node();
	newnode->data = data;
	newnode->left=newnode->right = NULL;
	return newnode;
}

tnode createTreaded(tnode root)
{
	if(root==NULL)
		return NULL;
	if(root->left==NULL && root->right==NULL)
		return root;

	if(root->left)
	{
		tnode  l = createTreaded(root->left);

		l->right = root;
		l->isthreaded = true;

	}

	if(!root->right)
		return root;

	createTreaded(root->right);
}

tnode leftMost(tnode root)
{
	while(root&&root->left)
		root = root->left;

	return root;
}

void inorder(tnode root)
{
	if(!root)
		return ;

	tnode curr = leftMost(root);
	while(curr)
	{
		cout<<curr->data<<" ";

		if(curr->isthreaded)
			curr = curr->right;
		else
			curr = leftMost(curr->right);
	}
}
int main()
{
	tnode root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);

	createTreaded(root);

	cout << "Inorder traversal of creeated "
		"threaded tree is\n";
	inorder(root);
	cout<<endl;
	return 0;
}

