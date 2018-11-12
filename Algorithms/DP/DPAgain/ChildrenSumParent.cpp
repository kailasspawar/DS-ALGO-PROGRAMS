#include<iostream>
#include"bt.h"
using namespace std;

bool childSumProp(bnode root)
{
  if(!root || !root->left && !root->right)
    return true;

  if(childSumProp(root->left) && childSumProp(root->right))
  {
    int ls ,rs;

    ls = root->left ? root->left->data : 0;

    rs = root->right ? root->right->data : 0;

    return root->data == ls+rs;
 }
return false;
}
 int main()
{
 bnode  root = newNode(4);
    root->left = newNode(1);
   root->right = newNode(3);
  root->right->left = newNode(3);
 childSumProp(root) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}
