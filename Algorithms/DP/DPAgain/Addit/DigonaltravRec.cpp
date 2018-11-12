#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct node
{
  int data;
  node *left,*right;
};
typedef struct node *bnode;
bnode newNode(int data)
{
  bnode newnode = new node();
    newnode->data = data;
   newnode->left=newnode->right = NULL;
  return newnode;
}

void digonalTrav(bnode root,int h,map<int,vector<int > >&m)
{
 if(!root)
   return;

 m[h].push_back(root->data);
    digonalTrav(root->left,h+1,m);
       digonalTrav(root->right,h,m);
}
void printdigonal(bnode root,map<int,vector<int> >&m)
{
  if(!root)
   return ;
  for(auto it = m.begin();it!=m.end();it++)
  {
   for(auto itr = it->second.begin();itr!=it->second.end();itr++)
    cout<<*itr<<" ";
   cout<<endl;
  }
 }
void digonal(bnode root)
{
 if(!root) 
  return ;
  map<int,vector<int> >m;

  digonalTrav(root,0,m);
 printdigonal(root,m);
}
int main()
{
 bnode root = NULL;
 root = newNode(8);
 root->left = newNode(3);
root->left->left = newNode(1);
  root->right = newNode(10);
  root->right->right = newNode(14);
  root->right->right->left = newNode(13);
 root->left->right = newNode(6);
 root->left->right->left = newNode(4);
 root->left->right->right = newNode(7);
 digonal(root);
return 0;
}

 

 
