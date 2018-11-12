#include<iostream>
#include"bst.h"
using namespace std;

bnode constructUtil(int pre[],int post[],int preInd,int l,int h,int size)
{
  if(preInd >= size && l > h)
    return  NULL;

  bnode root = newNode(pre[preInd++]);

  if(l == h)
   return root;
  int i;

  for( i = l;i<=h;i++)
   if(pre[preInd] == post[i])
    break;

  if(i <= h)
   {
      root->left = constructUtil(pre,post,preInd,l,i,size);
         root->right = constructUtil(pre,post,preInd,i+1,h,size); 
   }
  return root;
}
bnode construct(int pre[],int post[],int size)
{
  int preInd = 0;
  return constructUtil(pre,post,preInd,0,size-1,size);
}

int main()
{
  int pre[] = {1, 2, 4, 8, 9, 5, 3, 6, 7};
      int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1};
          int size = sizeof( pre ) / sizeof( pre[0] );
   bnode root = NULL;
   root = construct(pre,post,size);
  inorder(root);
     cout<<endl;
  return 0;
}
