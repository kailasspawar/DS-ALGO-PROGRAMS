#include<iostream>
#include<queue>
#include"Bintree.h"
using namespace std;

int maxWidth(bnode root)
{
  if(root==NULL) 
    return 0;

  queue<bnode> Q;

  Q.push(root);
// int count = 0;
   int max1 = -1;
  while(!Q.empty())
  { 
    int count = Q.size();
    max1 = max(max1,count);
   while(count--)
   {
    bnode temp = Q.front();
    cout<<Q.front()->data<<" ";
    Q.pop();
    if(temp->left)
      Q.push(temp->left);
    if(temp->right)
     Q.push(temp->right);
   }
  cout<<endl;
}
 return max1;
}

int main()
{
  bnode root = newNode(5);
    root->left = newNode(2);
   root->right= newNode(1);
     root->left->left = newNode(6);
    root->right->right = newNode(9);
  root->left->right = newNode(4);

  cout<<maxWidth(root)<<endl;
 return 0;
}
