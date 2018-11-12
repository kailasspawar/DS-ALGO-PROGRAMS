//Input:  pre[] = {10, 30, 20, 5, 15},  preLN[] = {'N', 'N', 'L', 'L', 'L'}
//Output: Root of following tree

#include<iostream>
#include"Bintree.h"
using namespace std;

bnode construct(int *pre,char *preL,int &ind,int n)
{
  int index = ind;
  if(index==n)
   return NULL;

  bnode temp = newNode(pre[index]);
  ind++;

  if(preL[index]=='N')
  {
    temp->left = construct(pre,preL,ind,n);
    temp->right = construct(pre,preL,ind,n);
  }

 return temp;
}

int main()
{
 bnode root = NULL;
    int pre[] = {10,30,20,5,15};
       char preL[] = {'N','N','L','L','L'};
     int n = sizeof(pre)/sizeof(pre[0]);

   int index = 0;
   root = construct(pre,preL,index,n);

   inorder(root);
 return 0;
}

