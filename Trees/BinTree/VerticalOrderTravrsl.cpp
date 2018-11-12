#include<iostream>
#include"Bintree.h"
using namespace std;

void findminmax(bnode root,int &min1,int &max1,int hd)
{
	if(!root)
		return ;

	min1 = min(hd,min1);
	max1 = max(hd,max1);

	findminmax(root->left,min1,max1,hd-1);

	findminmax(root->right,min1,max1,hd+1);
}

void printVerticalLine(bnode root,int line_no,int hd)
{
	if(root==NULL)
		return ;

	if(hd==line_no)
		cout<<root->data<<" ";

	printVerticalLine(root->left,line_no,hd-1);
	printVerticalLine(root->right,line_no,hd+1);
}

void printVertOrder(bnode root)
{
	int max = 0,min = 0;
	findminmax(root,min,max,0);

	for(int i = min;i<=max;i++)
	{
		printVerticalLine(root,i,0);
		cout<<"\n";
	}
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

	cout << "Vertical order traversal is \n";
	printVertOrder(root);
	return 0;
}
