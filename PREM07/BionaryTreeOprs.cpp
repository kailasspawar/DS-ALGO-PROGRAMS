#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
 int data;
 struct node *left,*right;
};

typedef struct node *Node;

Node create(int n)
{
  Node newnode;
 newnode = (struct node *)malloc(sizeof(Node));
 newnode ->left=newnode->right = NULL;
 newnode -> data = n;
 
 return newnode;
}
Node createBst(Node root,int ele)
{
  Node newnode;
 newnode = create(ele);
 if(root==NULL)
 {
  root = newnode;
  return root;
 }
 else
 {
 
   if(newnode->data <= root->data)
    root->left = createBst(root->left,ele);
   else
    root->right = createBst(root->right,ele);
     return root;
}
}

void display(Node root)
{
  if(root!=NULL)
  {
   display(root->left);
   cout<<root->data<<"\t";
   display(root->right);
  }
}
int Height(Node root)
{
  if(root==NULL)
   return -1;
  
  return max(Height(root->left),Height(root->right))+1;
}
int Diameter(Node root)
{
  int ld,rd;
  if(root==NULL)
   return 0;

  int lh = Height(root->left);
  int lr = Height(root->right);

  ld = Diameter(root->left);
  rd = Diameter(root->right);
 
 return max(lh+lr+1,max(ld,rd));
 }
  
void mirror(Node root)
{
  Node temp;
  if(root!=NULL) 
    return;

  if(root->left)
   mirror(root->left);
  if(root->right)
   mirror(root->right);

  temp = root->left;
  root->left = root->right;
  root->right = temp;  
}
int CountNodes(Node root)
{
  if(root==NULL)
    return 0;
  else 
  if(root->left==NULL&&root->right==NULL)
     return 1;
  else
  return (1+CountNodes(root->left)+CountNodes(root->right));
}
int countLeaf(Node root)
{
 static int leaf = 0;
 if(root!=NULL)
 {
  if(root->left==NULL&&root->right==NULL)
   ++leaf;

   countLeaf(root->left);
   countLeaf(root->right);
 }
 return leaf;
 }
int main()
{
  Node root = NULL;
  root = createBst(root,10);
  root = createBst(root,5);
  root = createBst(root,12);
  root = createBst(root,15);
  root = createBst(root,9);
  root = createBst(root,21);
  root = createBst(root,4);
  display(root);
  cout<<endl;
  cout<<"Height of tree is :"<<Height(root)<<endl;
  cout<<"Diameter of Tree is :"<<Diameter(root)<<endl;
  cout<<"Total nodes :"<<CountNodes(root)<<endl;  
  cout<<"Total leaf Nodes :"<<countLeaf(root)<<endl;
  mirror(root);
  display(root);
  return 0;
}
