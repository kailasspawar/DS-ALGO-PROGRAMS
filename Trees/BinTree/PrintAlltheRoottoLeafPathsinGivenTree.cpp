#include<iostream>
#include"Bintree.h"

using namespace std;
void print(int p[],int n);
void printRecpath(bnode root,int path[],int plen)
{
  if(root==NULL)
    return ;

  path[plen] = root->data;
   plen++;
  
  if(root->left==NULL && root->right==NULL)
     print(path,plen);

  else
  {
      printRecpath(root->left,path,plen);
    printRecpath(root->right,path,plen);
 }
}
void printPath(bnode root)
{
  int path[50];
  printRecpath(root,path,0);
}
void print(int p[],int n)
{
  for(int i = 0;i<n;i++)
   cout<<p[i]<<" ";

  cout<<endl;
}

int main()
{
  bnode root = newNode(5);
     root->right  = newNode(3);
   root->left = newNode(7);
  root->left->left = newNode(10);
 root->left->right = newNode(12);

 printPath(root);
 return 0;
}
