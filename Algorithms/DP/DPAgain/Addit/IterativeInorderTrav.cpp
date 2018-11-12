#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

void inorder1(bnode root)
{
  if(!root)
   return;

  bnode curr = root;
 stack<bnode>s;
 bool done = false;
 while(!done)
 {
   if(curr)
   {
     s.push(curr);
     curr = curr->left;
   }
   else
   {
     if(!s.empty())
     {
       curr = s.top();
       s.pop();
       cout<<curr->data<<" ";
       curr = curr->right;
     }
    else
     done = true;
   }
  }
}

int main()
{
  bnode root = newNode(1);
     root->left = newNode(2);
    root->right = newNode(3);
   root->left->left = newNode(4);
  root->left->left->left = newNode(5);
     root->right->right = newNode(6);
   inorder1(root);
  cout<<endl;
 return 0;
}
