#include<iostream>
#include"bst.h"
using namespace std;

/*
Input: [8, 58, 71, 18, 31, 32, 63, 92, 
43, 3, 91, 93, 25, 80, 28]
Output: [18, 63, 80, 25, 32, 43, 80, 93, 
80, 25, 93, -1, 28, -1, -1]

A tricky solution would be to use Binary Search Trees. We start scanning the array from right to left and insert each element into the BST. For each inserted element, we replace it in the array by its inorder successor in BST. If the element inserted is the maximum so far (i.e. its inorder successor doesn’t exists), we replace it by -1.
 */

void insertNode(node &root,int data,node &succ)
{
	if(!root)
	{
		node newnode = new Node();
		newnode->data = data;
		newnode->left = newnode->right = NULL;
		root = newnode;
	}
	if(data < root->data)
	{
		succ = root;
		insertNode(root->left,data,succ);
	}
	else if(data > root->data)
		insertNode(root->right,data,succ);
}

void replace(int arr[],int n)
{
	node root = NULL;

	for(int i = n-1;i>=0;i--)
	{
		node succ = NULL;

		insertNode(root,arr[i],succ);

		if(succ)
			arr[i] = succ->data;
		else
			arr[i] = -1;
	}
}

int main()
{
	int arr[] = { 8, 58, 71, 18, 31, 32, 63, 92,
		43, 3, 91, 93, 25, 80, 28 };
	int n = sizeof(arr)/ sizeof(arr[0]);

	replace(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
        cout<<endl;
	return 0;
}

