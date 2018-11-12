#include<iostream>
#include"bint.h"
#include<vector>
using namespace std;

bool hasPath(bnode root,vector<int> &arr,int x)
{
  if(!root)
   return false;
  
  arr.push_back(root->data);
  if(root->data == x)
    return true;

  if(hasPath(root->left,arr,x) ||
     hasPath(root->right,arr,x))
    return true;

  arr.pop_back();
  return false;
}

void printPath(bnode root,int x)
{
  if(!root)
    return ;
  vector<int>arr;
  if(hasPath(root,arr,x))
  {
    for(auto i = arr.begin();i < arr.end();i++)
     cout<<*i<<" ";
    cout<<endl;
  }
  else 
   cout<<"No Path\n";
}

int main()
{
 bnode root = newNode(1);
   root->left = newNode(2);
 root->right = newNode(3);
   root->left->left = newNode(4);
  root->left->right = newNode(5);
 root->right->right = newNode(6);

 printPath(root,5);
return 0;
}
