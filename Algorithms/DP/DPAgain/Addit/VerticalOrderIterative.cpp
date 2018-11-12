#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include"bst.h"
using namespace std;

void printVertical(bnode root)
{
  map<int,vector<int> >m;
  int hd = 0;
  
  queue<pair<bnode,int> >q;

  q.push(make_pair(root,hd));

  while(!q.empty())
  {
    pair<bnode,int> temp = q.front();
    q.pop();
      hd = temp.second;
      bnode node = temp.first;
    m[hd].push_back(node->data);
    if(node->left)
     q.push(make_pair(node->left,hd-1));
    if(node->right)
     q.push(make_pair(node->right,hd+1));
   }
  for(auto it = m.begin();it!=m.end();it++)
  {
   for(int i = 0;i<it->second.size();i++)
    cout<<it->second[i]<<" ";
   cout<<endl;
  }
}

int main()
{
  bnode root = newNode(5);
     root->left = newNode(7);
    root->left->left = newNode(8);
   root->left->right = newNode(2);
  root->right = newNode(43);
 root->right->right = newNode(87);
 printVertical(root);
return 0;
}
