#include<iostream>
#include"Bintree.h"
#include<vector>
#include<algorithm>
void intrav(bnode root,vector<int>&v)
{
  if(root)
  {
   intrav(root->left,v);
   v.push_back(root->data);
   intrav(root->right,v);
  }
}
void vecToBst(bnode root,vector<int>&v)
{
  static int i = 0;
  if(root)
  {
   vecToBst(root->left,v);
   root->data = v[i++];
   vecToBst(root->right,v);
  }
}
void binToBst(bnode root)
{
  vector<int> v;

  intrav(root,v); 
  sort(v.begin(),v.end());
  vecToBst(root,v);
}

int main()
{
 bnode root =NULL;
 root = newNode(10);
 root->left = newNode(2);
 root->right = newNode(7);
 root->left->left = newNode(8);
 root->left->right = newNode(4);

 binToBst(root);
 
 inorder(root);
 cout<<endl;
 return 0;
}
