#include<iostream>
#include"bst.h"
#include<stack>
#include<queue>
using namespace std;

void reverseLevelOrder(bnode root)
{
  queue<bnode>q;
     stack<bnode>s;
   q.push(root);

   while(!q.empty())
   {
     bnode node = q.front();
     q.pop();
     s.push(node);

     if(node->left)
       q.push(node->left);
     if(node->right)
      q.push(node->right);
   }
   while(!s.empty())
   {
    cout<<s.top()->data<<" ";
    s.pop();
   }
   cout<<endl;
}

int main()
{
  bnode root = newNode(1);
  root->left = newNode(2);
     root->right=newNode(3);
    root->left->left = newNode(4);
        root->left->right = newNode(5);
    root->right->right = newNode(6);
  reverseLevelOrder(root);
 return 0;
}
