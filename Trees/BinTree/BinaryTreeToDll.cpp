#include<iostream>
#include"Bintree.h"

//Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (left most node in BT) must be head node of the DLL
using namespace std;

void BtoDll(bnode root,bnode &head)
{
 if(root==NULL)
    return ;

 BtoDll(root->right,head);

 root->right = head;

 if(head!=NULL)
   head->left = root;

 head = root;

 BtoDll(root->left,head);

}
void display(bnode head)
{
 cout<<"Converted BinTree to Dll is\n";
 while(head)
 {
  cout<<head->data<<" ";
  head = head->right;
 }
cout<<"\n";
}
int main()
{
  bnode root = NULL;
    root = newNode(5);
    root->left = newNode(3);
    root->right = newNode(6);

      root->left->left = newNode(1);
      root->left->right = newNode(4);
      root->left->left->left = newNode(0);
      root->left->left->right = newNode(2);
   root->right->right = newNode(8);
   root->right->right->left = newNode(7);
   root->right->right->right = newNode(9);

   bnode list = NULL;
  BtoDll(root,list);

  display(list);
 return 0;
}
