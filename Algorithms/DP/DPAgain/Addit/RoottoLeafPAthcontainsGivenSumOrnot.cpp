#include<iostream>
using namespace std;

struct node
{
  int data;
 node *left,*right;
};

typedef struct node *bnode;

bnode newNode(int data)
{
 bnode newnode = new node();
   newnode->data = data;
  newnode->left = newnode->right= NULL;
 return newnode;
}

bool hasPathSum(bnode root,int sum)
{  
  if(!root)
   return sum == 0;
  else
  {
    bool ans = false;
    int subSum = sum-root->data;
    if(subSum == 0 && !root->left && !root->right)
     return true;

    if(root->left)
     ans = ans || hasPathSum(root->left,subSum);
    if(root->right)
     ans = ans || hasPathSum(root->right,subSum);

  return ans;
 }
}

int main()
{
  bnode root = NULL;
 root = newNode(10);
 root->left = newNode(8);
 root->left->left = newNode(3);
    root->right = newNode(2);
   root->left->right = newNode(5);
  root->right->left = newNode(2);
 hasPathSum(root,21) ? cout<<"Yes \n" : cout<<"No\n";
return 0;
}
