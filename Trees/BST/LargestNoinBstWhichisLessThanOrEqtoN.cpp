#include<iostream>
#include"bst.h"
using namespace std;

void printVal(node root,int n)
{
  static int count = 0;
  if(!root)
   return ;
  printVal(root->right,n);

  if(root->data <= n&&count==0)
  {
    cout<<root->data<<endl;
    count++;
    return;
  }
  
  printVal(root->left,n);
}

int main()
{
  node root = NULL;
  root = insert(root, 25);
    insert(root, 2);
    insert(root, 1);
    insert(root, 3);
    insert(root, 12);
    insert(root, 9);
    insert(root, 21);
    insert(root, 19);
    insert(root, 25);

   printVal(root,11);

   return 0;
}
