#include<iostream>
#include"bst.h"
#include<queue>
using namespace std;

void printSpecific(bnode root)
{
	if(!root)
		return ;
	cout<<root->data<<" ";
	if(root->left)
		cout<<root->left->data<<" "<<root->right->data<<" ";

	if(!root->left->left)
		return ;

	queue<bnode>q;
	q.push(root->left);
	  q.push(root->right);
	while(!q.empty())
	{
		bnode first = q.front();
		q.pop();
		bnode second = q.front();
		q.pop();

		cout<<" "<<first->left->data<<" "<<second->right->data;
		cout<<" "<<first->right->data<<" "<<second->left->data;
		if(first->left->left)
		{
			q.push(first->left);
			q.push(second->right);
			q.push(first->right);
			q.push(second->left);
		}
	}
  cout<<endl;
}
int main()
{
	bnode root = newNode(1);

	root->left        = newNode(2);
	root->right       = newNode(3);

	root->left->left  = newNode(4);
	root->left->right = newNode(5);
	root->right->left  = newNode(6);
	root->right->right = newNode(7);

	root->left->left->left  = newNode(8);
	root->left->left->right  = newNode(9);
	root->left->right->left  = newNode(10);
	root->left->right->right  = newNode(11);
	root->right->left->left  = newNode(12);
	root->right->left->right  = newNode(13);
	root->right->right->left  = newNode(14);
	root->right->right->right  = newNode(15);

	root->left->left->left->left  = newNode(16);
	root->left->left->left->right  = newNode(17);
	root->left->left->right->left  = newNode(18);
	root->left->left->right->right  = newNode(19);
	root->left->right->left->left  = newNode(20);
	root->left->right->left->right  = newNode(21);
	root->left->right->right->left  = newNode(22);
	root->left->right->right->right  = newNode(23);
	root->right->left->left->left  = newNode(24);
	root->right->left->left->right  = newNode(25);
	root->right->left->right->left  = newNode(26);
	root->right->left->right->right  = newNode(27);
	root->right->right->left->left  = newNode(28);
	root->right->right->left->right  = newNode(29);
	root->right->right->right->left  = newNode(30);
	root->right->right->right->right  = newNode(31);
    
    cout<<"Specific Level order traversal is \n";
   printSpecific(root);
  return 0;
}
