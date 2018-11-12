#include<iostream>
#include"Bintree.h"
#include<map>
#include<vector>
using namespace std;
void digonalPrintUtil(bnode root,int d,map<int,vector<int>>&digonal)
{
  if(!root)
   return ;

  digonal[d].push_back(root->data);

  digonalPrintUtil(root->left,d+1,digonal);
  
 digonalPrintUtil(root->right,d,digonal);
}

void digonalPrint(bnode root)
{
  map<int,vector<int>> m;

  digonalPrintUtil(root,0,m);

  cout<<"The digonal travrsl is:\n";
  for(auto it = m.begin();it!=m.end();it++)
  {
   for(auto itr = it->second.begin();itr!=it->second.end();itr++)
     cout<<*itr<<" ";
   cout<<"\n";
  }
}

int main()
{
  bnode root = NULL;
  root = newNode(8);
    root->left = newNode(3);
    root->left->left = newNode(1);  
    root->left->right = newNode(6);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    root->right = newNode(10);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);

    digonalPrint(root);
  return 0;
}
