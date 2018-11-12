#include<iostream>
#include"bst.h"
using namespace std;

void checkContains(node root,int arr[],int &index)
{
	if(!root)
		return;

	checkContains(root->left,arr,index);

	if(root->data == arr[index])
		index++;

	checkContains(root->right,arr,index);
}

int main()
{
	node root = NULL;
	root = insert(root, 8);
	root = insert(root, 10);
	root = insert(root, 3);
	root = insert(root, 6);
	root = insert(root, 1);
	root = insert(root, 4);
	root = insert(root, 7);
	root = insert(root, 14);
	root = insert(root, 13);

	int seq[] = {4, 6, 8, 14};
	int n = sizeof(seq)/sizeof(seq[0]);
          int index = 0;
	checkContains(root, seq, index);
	(index==n) ? cout << "Yes\n" :
		cout << "No\n";

	return 0;
}
