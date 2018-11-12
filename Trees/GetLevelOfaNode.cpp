#include<iostream>
#include"bint.h"
using namespace std;

bool isKey(bnode root,int x,int &level)
{
  if(!root)
    return false;
  int prel = level;
  level++;
  if(root->data == x)
    return true;

  if(isKey(root->left,x,level) ||
     isKey(root->right,x,level))
     return true;

  level = prel;
  return false;
}

int returnLevel(bnode root,int x)
{
 if(!root)
   return 0;

 int level = 0;
 if(isKey(root,x,level))
   return level;

 return 0;
}
int getLevelUtil(bnode root,int data,int level)
{
  if(!root)
    return 0;

  if(root->data == data)
    return level;

  int downlevel = getLevelUtil(root->left,data,level+1);
  if(downlevel != 0)
    return downlevel;
  downlevel = getLevelUtil(root->right,data,level+1);
   return downlevel;
}
int getLevel(bnode root,int data)
{
   return getLevelUtil(root,data,0);
}
int main()
{
  bnode root = newNode(1);
    root->left = newNode(2);
   root->right = newNode(3);
   root->right->right = newNode(7);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  cout<<returnLevel(root,3)<<endl;
 int node = 5;
  cout<<"The Level of node "<<node<<" is "<<getLevel(root,node)<<endl;
 
 return 0;
}
