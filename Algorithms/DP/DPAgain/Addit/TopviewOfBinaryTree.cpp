#include<bits/stdc++.h>
#include"bst.h"
using namespace std;

void topView(bnode root)
{
  if(!root)
    return ;

  map<int,int> m;
   queue<pair<bnode,int> >q ;
  q.push(make_pair(root,0));

 while(!q.empty())
 {
   pair<bnode,int> p = q.front();
   q.pop();
  bnode node = p.first;
     int val = p.second;
   if(m.find(val) == m.end())
   {
     m[val] = node->data;
     cout<<node->data<<" ";
   }
   if(node->left)
    q.push(make_pair(node->left,val - 1));
   if(node->right)
    q.push(make_pair(node->right,val + 1));
   }
}

int main()
{
  bnode r = newNode(1);
    r->left = newNode(2);
   r->right = newNode(3);
  r->left->left = newNode(4);
 r->right->right = newNode(5);
 r->right->left = newNode(5);
   r->left->right = newNode(6);
  topView(r);
  cout<<endl;
 return 0;
}
