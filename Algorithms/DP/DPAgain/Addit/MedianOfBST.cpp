#include<iostream>
#include"bst.h"
using namespace std;

void median(bnode root,int n,int &med,int &k)
{
  if(root && n%2 == 1)
  {
    median(root->left,n,med,k);
    k--;
    if(k==0)
     med = root->data;
    median(root->right,n,med,k);
  }
  else if(root && n%2==0)
  {
    median(root->left,n,med,k);
    k--;
    if(k == 1)
     med = root->data;
    if(k == 0)
     med = (med + root->data)/2;
    median(root->right,n,med,k);
 }
}
int countNodes(bnode root)
{
 if(!root)
  return 0;
 return 1 + countNodes(root->left) + countNodes(root->right);
}
void reverseinorder(bnode root)
{
 if(root)
 {
   reverseinorder(root->right);
   cout<<root->data<<" ";
   reverseinorder(root->left); 
 }
}
int main()
{
  bnode root = newNode(6);
    root->left = newNode(3);
   root->right =newNode(9);
    root->left->left = newNode(1);
   root->left->right =newNode(4);
  root->right->left  = newNode(8);
  root->right->right  = newNode(10);
    root->right->right->right = newNode(12);
 int n = countNodes(root);
 cout<<n<<endl;
     int med = 0,k = n/2 + 1;
  median(root,n,med,k);
  cout<<"The median is "<<med<<endl;
 return 0;
}

