#include<iostream>
#include"bst.h"
using namespace std;

void correctBst(node root,node &first,node &last,node &middle,node &prev)
{
  if(root)
  {
     correctBst(root->left,first,last,middle,prev);

     if(prev && root->data < prev->data)
     {
       if(!first)
       {
         first = prev;
	 middle = root;
       }
       else
         last = root; 
     }

   prev = root;
 
   correctBst(root->right,first,last,middle,prev);
 }
}
void swap(int *a,int *b)
{
 int temp = *a;
 *a = *b;
  *b = temp;
}
void correctBst1(node root)
{
   node first,last,middle,prev ;
   first = last = middle = prev = NULL;
   correctBst(root,first,last,middle,prev);
  if(first&&last)
   swap(&(first->data),&(last->data));
  else
   if(first&&middle)
    swap(&(first->data),&(middle->data));
}
int main()
{
  node root = newNode(10);
     root->left = newNode(5);
     root->right = newNode(8);
   root->left->left = newNode(2);
   root->left->right = newNode(20);
  correctBst1(root);
 inorder(root);
  cout<<endl;
 return 0;
}

