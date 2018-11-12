#include<iostream>
#include"bt.h"
using namespace std;

void printLevel(bnode root,int level,bool ltr)
{
  if(!root)
    return;

  if(level == 1)
   cout<<root->data<<" ";
  else if(level > 1)
  {
    if(ltr)
    {
      printLevel(root->left,level-1,ltr);
      printLevel(root->right,level-1,ltr);
    }
    else
    {
      printLevel(root->right,level-1,ltr);
      printLevel(root->left,level-1,ltr);
    }
 }
}
int height(bnode root)
 {
   if(!root)
    return 0;
  return 1+max(height(root->left),height(root->right));
}
void printSpiralForm(bnode root)
{
  bool ltr = false;

  int h = height(root);
  for(int i = 1;i<=h;i++)
  {
   printLevel(root,i,ltr);
   ltr = !ltr;
  }
}

int main()
{
  bnode root = newNode(7);
   root->left = newNode(5);
  root->right = newNode(2);
  root->left->left = newNode(3);
  root->left->right = newNode(1);
  root->right->left = newNode(4);
  root->right->right = newNode(9);
 
  printSpiralForm(root);
  cout<<endl;
 cout<<"Height is "<<height(root)<<endl;
 return 0;
}


