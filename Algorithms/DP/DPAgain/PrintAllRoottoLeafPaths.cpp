#include<iostream>
#include"bt.h"
using namespace std;


void printArr(int path[],int n)
{
  for(int i = 0;i<n;i++)
   cout<<path[i]<<" ";
  cout<<endl;
}
void printPathRec(bnode root,int path[],int pathLen)
{
  if(!root)
    return ;

  path[pathLen] = root->data;
  pathLen++;

  if(!root->left && !root->right)
   printArr(path,pathLen);
  else
  {
    printPathRec(root->left,path,pathLen);
    printPathRec(root->right,path,pathLen);
  }
}
void printPath(bnode root)
{
  int path[1000];
 printPathRec(root,path,0);
}


int main()
{
  bnode root = newNode(10);
    root->left        = newNode(8);
      root->right       = newNode(2);
        root->left->left  = newNode(3);
	  root->left->right = newNode(5);
	    root->right->left = newNode(2);

  printPath(root);
 return 0;
}
