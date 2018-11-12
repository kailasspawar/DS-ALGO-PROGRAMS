#include<iostream>
#include"bint.h"
#include<queue>
using namespace std;

void levelOrder(bnode root)
{
 if(!root)
  return;
  queue<bnode>Q;
 
 Q.push(root);
 while(!Q.empty())
 { 
   bnode temp = Q.front();
   Q.pop();
   cout<<temp->data<<" ";
   if(temp->left)
      Q.push(temp->left);
   if(temp->right)
     Q.push(temp->right);
 }
}
void levelOrderUsingTwoQ(bnode root)
{
 if(!root)
   return;

  queue<bnode>q1;
     queue<bnode>q2;
   q1.push(root);
  while(!q1.empty() || !q2.empty())
  {
    while(!q1.empty())
    {
      if(q1.front()->left)
       q2.push(q1.front()->left);
      if(q1.front()->right)
       q2.push(q1.front()->right);

      cout<<q1.front()->data<<" ";
      q1.pop();
    }
    cout<<endl;
    while(!q2.empty())
    {
      if(q2.front()->left)
       q1.push(q2.front()->left);
      if(q2.front()->right)
       q1.push(q2.front()->right);

      cout<<q2.front()->data<<" ";
      q2.pop();
    }
 }
}

 

int main()
{
  bnode root = null;
  root = newNode(1);
     root->left = newNode(2);
     root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
   root->right->left = newNode(6);
   root->right->right = newNode(7);
  levelOrder(root);
 cout<<endl;
 levelOrderUsingTwoQ(root);
 return 0;
}

 


