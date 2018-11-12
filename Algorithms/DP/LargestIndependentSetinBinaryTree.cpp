#include<iostream>
using namespace std;
struct Node
{
  int data;
  Node *left,*right;
};
typedef struct Node *tnode;
tnode newNode(int ele)
{
  tnode newnode = new Node();
    newnode->data = ele;
    newnode->left = newnode->right = NULL;
   return newnode;
}

int countLIS(tnode root)
{
  if(!root)
    return 0;

  int size_exc = countLIS(root->left) + countLIS(root->right);

  int size_inc = 1;
  if(root->left)
   size_inc += countLIS(root->left->left) + countLIS(root->left->right);
  if(root->right)
   size_inc += countLIS(root->right->right) + countLIS(root->right->left);

  return max(size_inc,size_exc);
}
void inorder(tnode root)
{
  if(root)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}
int main()
{
 tnode root = NULL;
  root = newNode(10);
     root->left = newNode(20);
     root->right = newNode(30);
     root->left->left = newNode(40);
     root->left->right = newNode(50);
     root->left->right->left = newNode(70);
     root->left->right->right = newNode(80);
     root->right->right = newNode(60);
  // inorder(root);
 cout<<countLIS(root)<<endl;
return 0;
}

