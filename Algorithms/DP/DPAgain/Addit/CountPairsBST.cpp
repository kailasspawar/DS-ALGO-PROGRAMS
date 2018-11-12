#include<iostream>
#include"bst.h"
#include<vector>
using namespace std;
void inor(bnode root,vector<int>&v)
{
	if(root)
	{
		inor(root->left,v);
		v.push_back(root->data);
		inor(root->right,v);
	}
}
void rinor(bnode root,vector<int>&v)
{ 
	if(root)
	{
		rinor(root->right,v);
		v.push_back(root->data);
		rinor(root->left,v);
	}
}
int countPairs(bnode r1,bnode r2,int x)
{
	if(!r1 || !r2)
		return 0;

	vector<int>v1; 
	vector<int>v2;
	inor(r1,v1);
	rinor(r2,v2); 

	int i =0,j = 0;
	int n = v1.size();
	int count = 0;
	while( i < n && j < n)
	{
		if(v1[i] + v2[j] == x)
		{
			count++;
			i++;
			j++;
		}
		else if(v1[i] + v2[j] > x)
			j++;
		else
			i++;
	}
	return count ;
}
int main()
{
	// formation of BST 1
	bnode root1 = newNode(5); /*             5        */
	root1->left = newNode(3); /*           /   \      */
	root1->right = newNode(7); /*         3     7     */
	root1->left->left = newNode(2); /*    / \   / \    */
	root1->left->right = newNode(4); /*  2  4  6  8    */
	root1->right->left = newNode(6);
	root1->right->right = newNode(8);

	// formation of BST 2
	bnode root2 = newNode(10); /*           10         */
	root2->left = newNode(6); /*           /   \        */
	root2->right = newNode(15); /*        6     15      */
	root2->left->left = newNode(3); /*    / \   /  \     */
	root2->left->right = newNode(8); /*  3  8  11  18    */
	root2->right->left = newNode(11);
	root2->right->right = newNode(18);

	int x = 16;
	cout << "Pairs = "
		<< countPairs(root1, root2, x)<<endl;

	return 0;
}

