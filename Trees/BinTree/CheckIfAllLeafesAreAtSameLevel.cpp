#include<iostream>
#include"Bintree.h"
using namespace std;

bool areSameLevel(bnode root,int level,int &leaflevel)
{
  if(!root)
    return true;

  if(!root->left && !root->right)
  {
    if(leaflevel == 0)
    {
      leaflevel = level;
      return true;
    }

    return (level == leaflevel);
  }

 return areSameLevel(root->left,level+1,leaflevel)&&
        areSameLevel(root->right,level+1,leaflevel);
}

int main()
{
  bnode root = newNode(22);
     root->left = newNode(12);
       root->right = newNode(13);
    root->left->left = newNode(5);
    root->right->right = newNode(4);
 int level = 0,leaflevel = 0;
 areSameLevel(root,level,leaflevel) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
