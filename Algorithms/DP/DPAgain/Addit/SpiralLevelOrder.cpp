#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

void spiralLevel(bnode root)
{
  if(!root)
   return;

  stack<bnode>s1,s2;
  s1.push(root);

  while(!s1.empty() || !s2.empty())
  {
    while(!s1.empty())
    {
      bnode node = s1.top();
      s1.pop();
      cout<<node->data<<" ";
      if(node->right)
       s2.push(node->right);
      if(node->left)
       s2.push(node->left);
    }
    cout<<endl;
    while(!s2.empty())
    {
      bnode node = s2.top();
      s2.pop();
      cout<<node->data<<" ";
      if(node->left)
       s1.push(node->left);
      if(node->right)
       s1.push(node->right);
    }
    cout<<endl;
 }
}
int main()
{
  bnode root = newNode(1);
    root->left = newNode(2);
   root->right = newNode(3);
  root->left->left = newNode(4);
 root->left->right = newNode(5);
 root->right->left = newNode(7);
 root->right->right = newNode(8);

 spiralLevel(root);
 cout<<endl;
return 0;
}
