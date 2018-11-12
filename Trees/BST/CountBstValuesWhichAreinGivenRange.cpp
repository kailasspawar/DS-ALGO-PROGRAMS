#include<iostream>
#include"bst.h"
using namespace std;

void getCnt(node root,int n1,int n2,int &count)
{
  if(!root)
   return ;

  getCnt(root->left,n1,n2,count);

  if(root->data >= n1 && root->data <= n2)
  { 
    cout<<root->data<<" ";
    count++;
  }

  getCnt(root->right,n1,n2,count);
}

int main()
{
  node root = NULL;
    root  = insert(root,5);
        insert(root,21);
        insert(root,15);
        insert(root,12);
        insert(root,4);
        insert(root,19);
    inorder(root);
     cout<<endl;
	int count = 0;
   getCnt(root,5,15,count);
    cout<<endl<<count<<endl;

 return 0;
}
