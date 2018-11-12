#include<iostream>
#include"Bintree.h"
using namespace std;

void constructTree(int parent[],bnode created[],int i,bnode &root)
{
  if(created[i] != NULL)
   return;

  created[i] = newNode(i);

  if(parent[i]==-1)
  {
    root = created[i];
    return;
  }
  if(created[parent[i]]==NULL)
   constructTree(parent,created,parent[i],root);

  bnode p = created[parent[i]];
  if(!p->left)
   p->left = created[i];
  else
   p->right = created[i];

}

bnode createTree(int parent[],int n)
{
  bnode root = NULL;
  
  bnode created[n] = {NULL};

  for(int i = 0;i<n;i++)
   constructTree(parent,created,i,root);

  return root;
}

int main()
{
  int parent[] =  {-1, 0, 0, 1, 1, 3, 5};
    int n = sizeof parent / sizeof parent[0];
      bnode root = createTree(parent, n);
	 cout << "Inorder Traversal of constructed tree\n";
	   inorder(root);

   return 0;
}
