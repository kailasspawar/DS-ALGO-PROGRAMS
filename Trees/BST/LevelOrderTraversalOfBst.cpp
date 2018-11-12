#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* left,*right;
};
typedef struct Node* btnode;

btnode newNode(int ele)
{
	btnode newnode = new Node();
	newnode->data = ele;
	newnode->left=newnode->right = NULL;
	return newnode;
}

btnode insert(btnode root,int ele)
{
	if(root==NULL) return newNode(ele);

	if(ele < root->data)
		root->left = insert(root->left,ele);

	else if(ele > root->data)
		root->right = insert(root->right,ele);

	return root;
}
int heightOfTree(btnode root)
{
  if(root==NULL)
    return 0;

  return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}
void printlevel(btnode root,int l)
{
  if(root==NULL)
    return;
  if(l==1)
    cout<<root->data<<" ";
  else if(l > 1)
  {
    printlevel(root->left,l-1);
      printlevel(root->right,l-1);
  }
}

void levelorder(btnode root)
{
  int l = heightOfTree(root);
  for(int i = 1;i<=l;i++)
   printlevel(root,i);
 cout<<"\n";
}
void reverseLevelOrder(btnode root)
{
  int l = heightOfTree(root);
  for(int i = l;i>=0;i--)
    printlevel(root,i);
  cout<<"\n";
}
/*  levelorder traversal of tree
        50
      /    \
    25      55
   /  \     / \
  24  30  52  60
 */
int main()
{
	btnode root = NULL;

	root=insert(root,50);
	root=insert(root,25);
	root=insert(root,30);
	root=insert(root,24);
	root=insert(root,55);
	root=insert(root,52);
	root=insert(root,60);

     cout<<"Height of Tree :"<<heightOfTree(root)<<endl;
	levelorder(root);
       reverseLevelOrder(root);
	cout<<endl;
	return 0;
}
