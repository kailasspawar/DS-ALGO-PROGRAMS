#include<iostream>
#include"bst.h"
#include<queue>
using namespace std;

void levelOrder(bnode root)
{
  if(!root)
   return;

  queue<bnode>q;
  q.push(root);
  while(!q.empty())
  {
    bnode node = q.front();
    q.pop();
    cout<<node->data<<" ";
    if(node->left)
     q.push(node->left);
    if(node->right)
     q.push(node->right);
  }
}
void levelLinebyLine(bnode root)
{
  if(!root)
   return ;
  queue<bnode>q1,q2;
  q1.push(root);
  while(!q1.empty() || !q2.empty())
  {
   while(!q1.empty())
   {
     bnode node = q1.front();
     q1.pop();
     cout<<node->data<<" ";
     if(node->left)
      q2.push(node->left);
     if(node->right)
      q2.push(node->right);
   }
   cout<<endl;
   while(!q2.empty())
   {
     bnode node = q2.front();
     q2.pop();
     cout<<node->data<<" ";
     if(node->left)
      q1.push(node->left);
     if(node->right)
      q1.push(node->right);
    }
   cout<<endl;
 }
}

int main()
{
  if(1  3)
   cout<<"yes\n";
  bnode root = newNode(10);
     root->left = newNode(20);
    root->right = newNode(30);
   root->left->left = newNode(40);
  root->left->right = newNode(50);
  root->right->left = newNode(60);
  root->right->right = newNode(70);
  levelOrder(root);
  cout<<endl;
  levelLinebyLine(root);
  cout<<endl;
 return 0;
}
