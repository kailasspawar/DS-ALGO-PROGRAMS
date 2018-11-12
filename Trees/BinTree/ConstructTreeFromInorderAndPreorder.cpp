#include<iostream>
#include<stdlib.h>
#include"Bintree.h"
using namespace std;
int search(int in[],int start,int end,int ele)
{
  for(int i = start;i<=end;i++)
  {
    if(in[i]==ele)
     return i;
  }
}

bnode reconstruct(int in[],int pre[],int inS,int inE)
{
  static int preind = 0;

  if(inS > inE)
   return NULL;
  
  bnode tnode = newNode(pre[preind++]);
 
  if(inS==inE)
   return tnode;

  int index = search(in,inS,inE,tnode->data);

  tnode->left = reconstruct(in,pre,inS,index-1);
  tnode->right = reconstruct(in,pre,index+1,inE);

  return tnode;
}
void postorder(bnode root)
{
 if(root)
 {
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
 }
}
/*       20
	/  \
       10   22
      / \  / \ 
     7   8 4  9
*/
int main()
{
  int in[] = {7,10,8,20,4,22,9};
    int n = sizeof(in)/sizeof(in[0]);
  int pre[] = {20,10,7,8,22,4,9};
  
  bnode root = reconstruct(in,pre,0,n-1);
  postorder(root);
  cout<<endl;
 return 0;
}
