#include<iostream>
#include"Bintree.h"
using namespace std;

bool isIsomorphic(bnode r1,bnode r2)
{
	if(!r1&&!r2)
		return true;
	if(!r1 || !r2)
		return false;
	if(r1->data!=r2->data)
		return false;

	return (isIsomorphic(r1->left,r2->right)&&isIsomorphic(r1->right,r2->left)) ||
			(isIsomorphic(r1->left,r2->left)&&isIsomorphic(r1->right,r2->right));
}

int main()
{
	bnode n1 = newNode(1);
	n1->left        = newNode(2);
	n1->right       = newNode(3);
	n1->left->left  = newNode(4);
	n1->left->right = newNode(5);
	n1->right->left  = newNode(6);
	n1->left->right->left = newNode(7);
	n1->left->right->right = newNode(8);

	bnode n2 = newNode(1);
	n2->left         = newNode(3);
	n2->right        = newNode(2);
	n2->right->left   = newNode(4);
	n2->right->right   = newNode(5);
	n2->left->right   = newNode(6);
	n2->right->right->left = newNode(8);
	n2->right->right->right = newNode(7);

	if (isIsomorphic(n1, n2))
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}
