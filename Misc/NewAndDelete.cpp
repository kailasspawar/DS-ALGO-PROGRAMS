#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node* newNode(int ele)
{
	Node* newnode =(struct Node*)malloc(sizeof(struct Node));
	newnode->data = ele;
	newnode->left=newnode->right = NULL;
	return newnode;
}
Node* insert(Node* root,int ele)
{
	if(root==NULL)
		return newNode(ele);
	if(ele < root->data)
		root->left = insert(root->left,ele);
	else if(ele > root->data)
		root->right = insert(root->right,ele);

	return root;
} 
void inorder(Node* root)
{
	if(root!=NULL){;
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
Node* minValueNode(Node* root)
{
	Node* curr = root;
	while(curr->left!=NULL)
		curr = curr->left;
	return curr;
}
Node* deleteNode(Node* root,int key)
{
	if(root==NULL)
		return root;
	if(key < root->data)
		deleteNode(root->left,key);
	else if(key > root->data)
		deleteNode(root->right,key);
	else
	{
		if(root->left==NULL)
		{
			Node* temp = root;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			Node* temp = root;
			free(root);
			return temp;
		}
		Node* temp = minValueNode(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right,temp->data);
	}
	return root;
}

int findMin(Node* root)
{
	while(root->left!=NULL)
		root=root->left;
	return root->data;
}
int findMax(Node* root)
{
	while(root->right)
		root=root->right;
	return root->data;
}
int heightOfBST(Node* root)
{
	if(root==NULL)
		return 0;
	return max(heightOfBST(root->left),heightOfBST(root->right))+1;
}
int countNodes(Node* root)
{
	static int count = 0;
	if(root==NULL)
		return 0;
	if(root->left)
	{
		count++;
		countNodes(root->left);
	}
	if(root->right)
	{
		count++;
		countNodes(root->right);
	}
	return count+1;

	//  return (1+countNodes(root->left)+countNodes(root->right));
}
int countFullNodes(Node* root)
{
	if(root==NULL)
		return 0;
	if(root->left!=NULL&&root->right!=NULL)
		return (1+countFullNodes(root->left)+countFullNodes(root->right));
}
//count no of full nodes using iterative method
int countIteative(Node * root)
{
	queue<Node* >q;
	if(!root)
		return 0;

	q.push(root);
	int count = 0;
	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();
		if(temp->left && temp->right) 
			count++;

		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
	return count;
}


int main()
{
	Node* root = NULL;
	root = insert(root,20);
	root =  insert(root,5);
	root =  insert(root,10);
	root =  insert(root,15);
	root = insert(root,3);
	root =  insert(root,9);
	root =  insert(root,23);
	root =  insert(root,24);
	root =  insert(root,21);
	root =  insert(root,25);
	//   Node* root1 = NULL;
	inorder(root);
	//  cout<<"\n"; 
	root = deleteNode(root,20);
	inorder(root);
	cout<<endl;
	cout<<"Minimun val on BST :"<<findMin(root)<<endl;
	cout<<"Maximum val in BST :"<<findMax(root)<<endl;

	cout<<"Height of BST :"<<heightOfBST(root)<<endl;
	cout<<"BST have the nodes = :"<<countNodes(root)<<endl;
	cout<<"BST have Full nodes = :"<<countFullNodes(root)<<endl;
	//                   cout<<"BST have Full nodes(Using iterative) = :"<<countIteative(root)<<endl;
	//  delete [] root;
	return 0;
}
