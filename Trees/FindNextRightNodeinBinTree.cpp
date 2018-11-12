#include<iostream>
#include"bint.h"
#include<queue>
using namespace std;

bnode nextRight(bnode root,int x)
{
  if(!root)
    return NULL;

  queue<bnode>qn;
     queue<int>ql;
   int level = 0;
   qn.push(root);
      ql.push(level);
  while(qn.size())
  {
    bnode root = qn.front();
      level = ql.front();
    qn.pop();
       ql.pop();
     if(root->data == x)
     {
       if(ql.size() == 0 || ql.front()!=level)
         return NULL;
       return qn.front();
     }
     if(root->left)
     {
       qn.push(root->left);
          ql.push(level+1);  
     }
     if(root->right)
     {
      qn.push(root->right);
        ql.push(level+1);
     }
  }
 return NULL;
}

int main()
{
  bnode root = newNode(1);
     root->left = newNode(2);
    root->left->right = newNode(4);
   root->left->left = newNode(8);
   root->right = newNode(6);
   root->right->right = newNode(5);
  bnode node = nextRight(root,4);
  cout<<"The nextright of "<<"4"<<" is "<<node->data<<endl;
 return 0;
}
