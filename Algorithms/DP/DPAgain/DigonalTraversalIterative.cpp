#include<iostream>
#include"bt.h"
#include<queue>

void digonalTrav(bnode root)
{
	if(!root)
		return ;
	queue<bnode> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		bnode temp = q.front();
		q.pop();

		if(!temp)
		{
			if(q.empty())
				return ;

			cout<<endl;
			q.push(NULL);
		}
		else
		{
			while(temp)
			{
				cout<<temp->data<<" ";
				if(temp->left)
					q.push(temp->left);

				temp = temp->right;
			}

		}
	}
}
int main()
{
	bnode root = newNode(8);
	root->left = newNode(3);
	root->right = newNode(10);
	root->left->left = newNode(1);
	root->left->right = newNode(6);
	root->right->right = newNode(14);
	root->right->right->left = newNode(13);
	root->left->right->left = newNode(4);
	root->left->right->right = newNode(7);
	digonalTrav(root);
	cout<<endl;
	return 0;
}
