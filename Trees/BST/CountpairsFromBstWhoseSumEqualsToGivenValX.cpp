#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

int countPairs(node root1,node root2,int x)
{
	if(!root1 || !root2)
		return 0;
	node top1,top2;
	stack<node>s1,s2;
	int count = 0;
	while(1)
	{
		while(root1)
		{
			s1.push(root1);
			root1 = root1->left;
		}
		while(root2)
		{
			s2.push(root2);
			root2 = root2->right;
		}

		if(s1.empty() || s2.empty())
			break;

		top1 = s1.top();
		top2 = s2.top();
		if((top1->data + top2->data) == x)
		{
			count++;
			s1.pop();
			s2.pop();
			root1 = top1->right;
			root2 = top2->left;
		}
		else if((top1->data + top2->data) < x)
			{
				s1.pop();
				root1 = top1->right;
			}
	        else
	        {
				s2.pop();
			 	root2 = top2->left;
	        }
	}
	return count;
}

int main()
{
	node root1 = newNode(5); /*             5        */
	root1->left = newNode(3); /*           /   \      */
	root1->right = newNode(7); /*         3     7     */
	root1->left->left = newNode(2); /*    / \   / \    */
	root1->left->right = newNode(4); /*  2  4  6  8    */
	root1->right->left = newNode(6);
	root1->right->right = newNode(8);

	// formation of BST 2
	node root2 = newNode(10); /*           10         */
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
