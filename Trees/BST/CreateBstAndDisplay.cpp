#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
 int data;
  struct node *left,*right;
};

typedef struct node *tnode;
tnode newNode(int ele)
{
  tnode newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = ele;
 newnode->left= newnode->right = NULL;
  return newnode;
}
tnode insertBst(tnode root,int ele)
{
  if(root==NULL)
  {
    tnode newnode = newNode(ele);
     return newnode;
  }
  if(ele < root->data)
    root->left = insertBst(root->left,ele); 
  else
    root->right = insertBst(root->right,ele);

  return root;
}
void inorder(tnode root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}
void preorder(tnode root)
{
  if(root!=NULL)
  {
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }
}
int heightOfTree(tnode root)
{
  if(root==NULL)
    return -1;
  return max (heightOfTree(root->left),heightOfTree(root->right))+1;
}
tnode searchNode(tnode root,int key)
{
  if(!root)
    return NULL;
  if(root->data == key)
   return root;
  if(key < root->data)
    return searchNode(root->left,key);
  else
    return searchNode(root->right,key);
}
int countNodes(tnode root)
{
 if(root==NULL)
  return 0;
 
 return 1+countNodes(root->left)+countNodes(root->right);
}
int main()
{
  tnode root=NULL;
   root = insertBst(root,20);
   insertBst(root,5);
   insertBst(root,10);
   insertBst(root,15);
   insertBst(root,12);
   insertBst(root,27);
   insertBst(root,29);
   insertBst(root,21);
   insertBst(root,18);
   insertBst(root,19);
      inorder(root);
   cout<<endl;
          preorder(root);
   cout<<endl;
  tnode root2 = NULL;
  root2 = insertBst(root2,10);
  root2 = insertBst(root2,5);
  root2 = insertBst(root2,3);
  root2 = insertBst(root2,9);
  root2 = insertBst(root2,15);
  root2 = insertBst(root2,14);
  root2 = insertBst(root2,20);
  cout<<heightOfTree(root2)<<endl;
 tnode temp = searchNode(root2,18);
 (!temp) ? cout<<"Ele is NOT found\n" : cout<<"Ele is Found\n";
  return 0;
}





