#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
 char data;
 node *left,*right;
};
typedef struct node *tnode;
tnode newNode(char ele)
{
 tnode newnode = new node();
 newnode->data = ele;
 newnode->right = newnode->left = NULL;
 return newnode;
}
void inorder(tnode root)
{ 
 if(root)
 {
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
 }
}

int search(char in[],int s,int e,int ele)
{
 for(int i = s;i<=e;i++)
 {
  if(in[i]==ele)
   return i;
 }
}
tnode construct(char in[],char pre[],int ins,int ine)
{
  static int preInd = 0;
  if(ins > ine)
   return NULL;

  tnode temp = newNode(pre[preInd++]);
 
  if(ins==ine)
   return temp;
  int index = search(in,ins,ine,temp->data);
 temp->left = construct(in,pre,ins,index-1);
 temp->right = construct(in,pre,index+1,ine);

 return temp;
}

int main()
{
  tnode root = NULL;
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  root = construct(in,pre,0,len-1);
 inorder(root);
 cout<<endl;
 return 0;
}
