#include<iostream>
#include"bt.h"
#define M -1
using namespace std;

void serialize(bnode root,FILE *fp)
{
  if(!root)
  {
    fprintf(fp,"%d ",M);
    return;
  }
  fprintf(fp,"%d ",root->data);

  serialize(root->left,fp);
     serialize(root->right,fp);
}

void deserialize(node *&root,FILE *fp)
{
  int val;
  if(!fscanf(fp,"%d ",&val) || val == M)
   return;

  root = newNode(val);
 deserialize(root->left,fp);
   deserialize(root->right,fp);
}

int main()
{
  bnode root = newNode(1);
      root->left = newNode(2);
    root->right = newNode(3);
   root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->right = newNode(6);
  FILE *fp = fopen("prem.txt","w");
  if(!fp)
   cout<<"cant open the file\n";
  else
   serialize(root,fp);
  fclose(fp);

  node *root1 = NULL;
  fp = fopen("prem.txt","r");
  deserialize(root1,fp);
 inorder(root);
 cout<<endl;
 return 0;
}
