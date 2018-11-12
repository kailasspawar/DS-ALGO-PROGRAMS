#include<bits/stdc++.h>
#include"bst.h"
using namespace std;

void printVertSum(bnode root)
{
	if(!root)
		return;
	map<int,int>m;
	int hd = 0;
	queue<pair<bnode,int> >q;
	q.push(make_pair(root,hd));
	while(!q.empty())
	{
		pair<bnode,int> temp = q.front();
		q.pop();
		bnode node = temp.first;
		hd = temp.second;
		if(node->left)
			q.push(make_pair(node->left,hd-1));

		m[hd]+=node->data;

		if(node->right)
			q.push(make_pair(node->right,hd+1));
	}
	for(auto it = m.begin();it!=m.end();it++)
		cout<<it->first<<"-> "<<it->second<<endl;

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
	root->right->left->right = newNode(8);
	root->right->right->right = newNode(9);
	printVertSum(root);
	return 0;
}
