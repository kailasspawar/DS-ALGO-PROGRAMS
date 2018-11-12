#include<iostream>
#include"Bintree.h"
using namespace std;

int heightOfBst(bnode root)
{
  if(root==NULL)
   return 0;

  return max(heightOfBst(root->left),heightOfBst(root->right))+1;
}
int countNodes(bnode root)
{
 if(root==NULL)
   return 0;

    return 1+countNodes(root->left)+countNodes(root->right);
}
bool isSumEq(bnode root,int sum)
{
  if(!root)
   return (sum==0);
  else
  {
    bool ans = false;
   int subsum = sum - root->data;
  if(subsum == 0 && root->left==NULL && root->right==NULL)
    return true;
  if(root->left)
   ans = ans || isSumEq(root->left,subsum);
  if(root->right)
   ans = ans || isSumEq(root->right,subsum);
 return ans;
 }
}
int main()
{
  bnode root = newNode(10);
     root->left = newNode(12);
     root->right = newNode(14);
   root->left->left = newNode(32);
  root->left->right = newNode(23);
  cout<<heightOfBst(root)<<endl;
     cout<<countNodes(root)<<endl;

  (isSumEq(root,54)) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
 
