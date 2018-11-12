#include<iostream>
#include"bst.h"
using namespace std;

void printSorted(node r1,node r2)
{
	if(r1 || r2)
	{
		printSorted(r1->left,r2->left);

		if(r1->data < r2->data)
			cout<<r1->data<<" "<<r2->data<<" ";

		printSorted(r1->right,r2->right);
	}
}

int main()
{
	 node  root1 = NULL, root2 = NULL;

	/* Let us create the following tree as first tree
	   3
	   /  \
	   1    5
	 */
	root1 = newNode(3);
	root1->left = newNode(1);
	root1->right = newNode(5);

	/* Let us create the following tree as second tree
	   4
	   /  \
	   2    6
	 */
	root2 = newNode(4);
	root2->left = newNode(2);
	root2->right = newNode(6);

	// Print sorted nodes of both trees
	printSorted(root1, root2);
	cout<<endl;

	return 0;
}
