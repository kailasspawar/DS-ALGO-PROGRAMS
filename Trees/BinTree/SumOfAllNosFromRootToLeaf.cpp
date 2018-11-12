#include<iostream>
#include"Bintree.h"
#include<string.h>
using namespace std;

long long printAllLeaf(bnode root,string str)
{
  static long long sum = 0;
  if(root==NULL)
    return 0; 
   str.push_back(root->data + '0');
  if(!root->left&&!root->right)
  {
     sum+=stoi(str);
  //   cout<<sum<<endl;
  }
  else
  {
    printAllLeaf(root->left,str);
      printAllLeaf(root->right,str);
  }

 return sum;
}
int treePathSum(bnode root,int val)
{
  if(!root)
   return 0;

  val = (val*10 + root->data);
  if(!root->left&&!root->right)
    return val;

 return   treePathSum(root->left,val) +
      treePathSum(root->right,val);

}
int main()
{
  bnode root = newNode(6);
     root->left = newNode(3);
    root->right = newNode(5);
  root->left->left = newNode(2);
 root->left->right = newNode(5);

 root->left->right->left = newNode(7);
 root->left->right->right = newNode(4);
 root->right->right = newNode(4);
 string str = "";
 cout<<printAllLeaf(root,str)<<endl;
    cout<<treePathSum(root,0)<<endl;
 return 0;
}
  
