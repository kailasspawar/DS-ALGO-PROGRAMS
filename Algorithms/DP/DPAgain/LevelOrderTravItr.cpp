#include<iostream>
#include"bt.h"
#include<stack>
using namespace std;

void spiralLevelOrder(bnode root)
{
  if(!root)
   return;

  stack<bnode>s1;
     stack<bnode>s2;

  s1.push(root);

  while(!s1.empty() || !s2.empty())
  {
   cout<<endl;
    while(!s1.empty())
    {
      bnode temp = s1.top();
      s1.pop();
      cout<<temp->data<<" ";
      if(temp->right)
       s2.push(root->right);
      if(temp->left)
       s2.push(temp->left);
    }
    cout<<endl;
    while(!s2.empty())
    {
      bnode temp = s2.top();
      s2.pop();
      cout<<temp->data<<" ";
      if(temp->left)
       s1.push(temp->left);
      if(temp->right)
       s1.push(temp->right);
    }
  }
}

int main()
{
  bnode root = newNode(7);
    root->left = newNode(5);
    root->left->left = newNode(3);
   root->left->right = newNode(1);
   root->right = newNode(2);
  root->right->left = newNode(6);
     root->right->right = newNode(9);
  spiralLevelOrder(root);
 cout<<endl;
 return 0;
}


