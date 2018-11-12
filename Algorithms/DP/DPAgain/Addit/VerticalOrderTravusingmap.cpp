#include<iostream>
#include"bst.h"
#include<map>
#include<vector>
using namespace std;

void verticalOrder(bnode root,int hd,map<int,vector<int> >&m)
{
  if(!root)
   return;

  m[hd].push_back(root->data);

 verticalOrder(root->left,hd-1,m);
   verticalOrder(root->right,hd+1,m);
}

void printVertical(bnode root,map<int,vector<int> >&m)
{
  for(auto itr = m.begin();itr!=m.end();itr++)
  {
   for(auto it = itr->second.begin();it!=itr->second.end();it++)
    cout<<*it<<" ";
   cout<<endl;
  }
}
void vertical(bnode root)
{
  map<int,vector<int> >m;
  verticalOrder(root,0,m);
   printVertical(root,m);
}
int main()
{
  bnode root = newNode(10);
 root->left = newNode(9);
    root->left->left = newNode(7);
   root->left->right = newNode(5);
  root->right = newNode(8);
 root->right->left = newNode(3);
 root->right->left->right = newNode(11);
    root->right->right = newNode(2);
   vertical(root);
  return 0;
}
