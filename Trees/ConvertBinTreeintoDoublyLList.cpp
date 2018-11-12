#include<iostream>
#include"bint.h"
#include<deque>
#include<stack>
using namespace std;

void push(bnode &head,bnode node)
{
	node->right = head;
	node->left = NULL;
	if(head)
		head->left = node;

	head = node;
}
void printList(bnode head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head = head->right;
	}
}
void spiralOrder(bnode root)
{
	if(!root)
		return ;
	deque<bnode>q;
	stack<bnode>s;
	q.push_front(root);
	int level = 0;
	while(!q.empty())
	{
		int nodeCount = q.size();
		if(level&1)
		{
			while(nodeCount > 0)
			{
				bnode node = q.front();
				q.pop_front();
				s.push(node);

				if(node->left)
					q.push_back(node->left);
				if(node->right)
					q.push_back(node->right);
				nodeCount--;
			}
		}
		else
		{
			while(nodeCount > 0)
			{
				bnode node = q.back();
				q.pop_back();
				s.push(node);

				if(node->right)
					q.push_front(node->right);
				if(node->left)
					q.push_front(node->left);
				nodeCount--;
			}
		}
		level++;
	}
	bnode head = NULL;

	while(!s.empty())
	{
		push(head,s.top());
		s.pop();
	}

	cout<<"Created Dll is \n";
	printList(head);
}

int main()
{
	 bnode root =  newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);

	root->left->left->left  = newNode(8);
	root->left->left->right  = newNode(9);
	root->left->right->left  = newNode(10);
	root->left->right->right  = newNode(11);
	//root->right->left->left  = newNode(12);
	root->right->left->right  = newNode(13);
	root->right->right->left  = newNode(14);
	spiralOrder(root);
}
