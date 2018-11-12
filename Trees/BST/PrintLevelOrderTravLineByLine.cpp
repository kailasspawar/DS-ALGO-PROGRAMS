#include<iostream>
#include"S/bst1.cpp"
#include<queue>

void printlevel(node root)
{
 if(root==NULL)
   return ;
 
  queue<node>q;
 q.push(root);
while(1)
{
  int nodecnt = q.size();
  if(nodecnt==0)
   return;
 while(nodecnt > 0)
 {
   node temp = q.front();
    q.pop();
   cout<<temp->data<<" ";
   if(temp->left!=NULL)
    q.push(temp->left);
   if(temp->right!=NULL)
    q.push(temp->right);
   nodecnt--;
 }
 cout<<endl;
}
}

int main()
{
  node root = NULL;
  root = insert(root,10);
  root = insert(root,5);
  root = insert(root,3);
  root = insert(root,9);
  root = insert(root,15);
  root = insert(root,12);
  root = insert(root,20);
 inorder(root);
   cout<<endl;
  printlevel(root);
 return 0;
}
