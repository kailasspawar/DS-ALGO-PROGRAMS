#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

bool pairSum(node root,int sum)
{
	stack<node>s1,s2;

	node curr1,curr2;
	curr1 = curr2 = root;
	int val1 = 0,val2 = 0;
	bool done1 = false,done2 = false;
	while(true)
	{
		while(!done1)
		{
			if(curr1)
			{
				s1.push(curr1);
				curr1 = curr1->left;
			}
			else
			{
				if(!s1.empty())
				{
					curr1 = s1.top();
					s1.pop();
					val1 = curr1->data;
					curr1 = curr1->right;
				}
				else
					done1 = true;  
			}
		}

		while(!done2)
		{
			if(curr2)
			{
				s2.push(curr2);
				curr2 = curr2->right;
			}
			else
			{
				if(!s2.empty())
				{
					curr2 = s2.top();
					s2.pop();
					val2 = curr2->data;
					curr2 = curr2->left;
				}
				else
					done2 = true;
			}
		}

		if(val1!=val2 && val1+val2 == sum)
		{
			cout<<val1<<","<<val2<<endl;
			return true;
		}

		if((val1 + val2) < sum)
			done1 = false;
		else if((val1+val2) > sum)
			done2 = false;

		if(val1 >= val2)
			return false;
	}
}

int main()
{
	node root =  newNode(15);
	root->left = newNode(10);
	root->right = newNode(20);
	root->left->left = newNode(8);
	root->left->right = newNode(12);
	root->right->left = newNode(16);
	root->right->right = newNode(25);

	int target = 33;
	if (pairSum(root, target) == false)
	    cout<<"\n No such values are found\n";

	return 0;
}
