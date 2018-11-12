#include<iostream>
#include<queue>
using namespace std;

struct node
{
 int data;
 node *left,*right;
};
typedef struct node *bnode;

bnode newNode(int data)
{
  bnode newnode = new node();
  newnode->data = data;
  newnode->left = newnode->right = NULL;
  return newnode;
}
void printDigonal(bnode root)
{
  queue<bnode>q;

  q.push(root);
    q.push(NULL);
  while(!q.empty())
  {
    bnode temp = q.front();
    q.pop();

    if(!temp)
    {
      if(q.empty())
       return;

      cout<<endl;
     q.push(NULL);
   }
   else
   {
     while(temp)
     {
       cout<<temp->data<<" ";
       if(temp->left)
        q.push(temp->left);
       temp = temp->right;
     }
    }
  }
}

int main()
{
  bnode root = NULL;

  root = newNode(8);
   root->left = newNode(3);
  root->right = newNode(10);
 root->left->left = newNode(1);
 root->left->right = newNode(6);
 root->left->right->left = newNode(4);
 root->left->right->right = newNode(7);
  root->right->right = newNode(14);
  root->right->right->left = newNode(13);
 printDigonal(root);
  cout<<endl;
return 0;
}


    




