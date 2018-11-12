#include<iostream>
#include<map>
#include"bt.h"
using namespace std;

void digonalSum(bnode root,int vd,map<int,int>&mp)
{
	if(!root)
		return ;

	mp[vd] += root->data;

	digonalSum(root->left,vd+1,mp);

	digonalSum(root->right,vd,mp);

}

int main()
{
	bnode root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(9);
	root->left->right = newNode(6);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->right->left->right = newNode(7);
	root->right->left->left = newNode(12);
	root->left->right->left = newNode(11);
	root->left->left->right = newNode(10);

	map<int,int>mp;
	int vd = 0;
	digonalSum(root,0,mp);
	for(auto it = mp.begin();it!=mp.end();it++)
		cout<<it->second<<" ";
	cout<<endl;
	return 0;
}
