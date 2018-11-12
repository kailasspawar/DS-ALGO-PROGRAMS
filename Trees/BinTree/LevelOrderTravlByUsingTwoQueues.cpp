#include<iostream>
#include"Bintree.h"
#include<queue>
using namespace std;
 
void levelOrder(bnode root)
{
  queue<bnode> q1;
    queue<bnode>q2;
 if(root==NULL)
   return;
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
   cout<<endl;
 }
}

int main()
{
  bnode root = NULL;
    root = newNode(10);
       root->left = newNode(20);
       root->left->left = newNode(30);
       root->left->right = newNode(40);
       root->right = newNode(15);
       root->right->right = newNode(25);
       root->right->left = newNode(47);
   levelOrder(root);
 return 0;
}

