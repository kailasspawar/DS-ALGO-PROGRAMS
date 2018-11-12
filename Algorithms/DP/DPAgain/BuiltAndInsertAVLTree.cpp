#include<iostream>
using namespace std;

struct node
{
  int data;
  node *left,*right;
 int height;
};

typedef struct node *anode;

anode newNode(int data)
{
  anode newnode = new node();
   newnode->data = data;
   newnode->height = 1;
  newnode->left = newnode->right = NULL;
 return newnode;
}

int height(anode root)
{
  if(!root)
   return 0;

 return root->height;
}
int getBalance(anode root)
{
  if(!root)
   return 0;
  return height(root->left) - height(root->right);
}

anode leftRotate(anode x)
{
  anode y = x->right;
         anode t2 = y->left;
    y->left = x;
   x->right = t2;

  x->height = 1 + max(height(x->left),height(x->right));
 y->height = 1 + max(height(y->left),height(y->right));

 return y;
}
anode rightRotate(anode y)
{
  anode x = y->left;
  anode t2 = x->right;

  x->right = y;
 y->left = t2;

 x->height = 1 + max(height(x->left),height(x->right));
 y->height = 1 + max(height(y->left),height(y->right));
 return x;
}
anode insert(anode root,int key)
{
  if(!root)
   return newNode(key);

  if(key < root->data)
   root->left = insert(root->left,key);
  else if(key > root->data)
   root->right = insert(root->right,key);
  else
   return root;
  root->height = 1 + max(height(root->left),height(root->right));
   int balance = getBalance(root);

   if(balance > 1 && key < root->left->data)
    return rightRotate(root);

   if(balance < -1 && key > root->right->data)
    return leftRotate(root);

   if(balance > 1 && key > root->left->data)
   {
      root->left = leftRotate(root->left);
     return rightRotate(root);
   }

   if(balance < -1 && key < root->right->data)
   {
     root->right = rightRotate(root->right);
      return leftRotate(root);
   }

 return root;
}
void inorder(anode root)
{
  if(root)
  {
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
  }
}

int main()
{ 
   anode root = NULL;
   
     /* Constructing tree given in the above figure */
       root = insert(root, 10);
         root = insert(root, 20);
	   root = insert(root, 30);
	     root = insert(root, 40);
	       root = insert(root, 50);
	         root = insert(root, 25);
     inorder(root);
    cout<<endl;
   return 0;
}
