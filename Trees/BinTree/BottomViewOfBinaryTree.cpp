#include<iostream>
#include<queue>
#include<map>
#include<climits>
using namespace std;

struct Node
{
	int data;
     int hd;
       	Node *left,*right;

	Node(int ele)
	{
		data = ele;
		hd = INT_MAX;
		left = right = NULL;
	}
};

typedef struct Node *node;

void bottomView(node root)
{
	if(!root)
		return ;

	queue<node>q;

	map<int,int>m;

	q.push(root);
	int hd = 0;
	root->hd = hd;
	while(!q.empty())
	{
	    node temp;
		temp = q.front();
		q.pop();

		hd = temp->hd;
		m[hd]= temp->data;

		if(temp->left)
		{
			temp->left->hd = hd-1;
			q.push(temp->left);
		}
		if(temp->right)
		{
			temp->right->hd = hd+1;
			q.push(temp->right);
		}
	}
	for(auto it = m.begin();it!=m.end();it++)
		cout<<it->second<<" ";
	cout<<endl;
}

int main()
{
	Node *root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(22);
	root->left->left = new Node(5);
	root->left->right = new Node(3);
	root->right->left = new Node(4);
	root->right->right = new Node(25);
	root->left->right->left = new Node(10);
	root->left->right->right = new Node(14);
	cout << "Bottom view of the given binary tree :\n";
		bottomView(root);
	return 0;
}
