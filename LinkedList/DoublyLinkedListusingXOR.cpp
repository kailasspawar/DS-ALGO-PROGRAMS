#include<iostream>
using namespace std;

struct node
{
  int data;
  node *npx;
};

typedef struct node *lnode;
lnode XOR(lnode a,lnode b)
{
  return (lnode) ((unsigned int) (a) ^ (unsigned int) (b));
}
void insert(lnode &list,int data)
{
  lnode newnode = new node();
  newnode->data = data;

  newnode->npx = XOR(list,NULL);

  if(list)
  {
    lnode next = XOR(list->npx,NULL);
    list->npx = XOR(newnode,next);
  }

 list = newnode;
}

void printList(lnode list)
{
  lnode curr = list;
  lnode prev  = NULL;
     lnode next;

  while(curr)
  {
    cout<<curr->data<<" ";
    next = XOR(prev,curr->npx);
    prev = curr;
    curr = next;
  }
  cout<<endl;
}

int main()
{
  lnode list = NULL;
  insert(list,10);
  insert(list,20);
  insert(list,30);
  insert(list,40);

 printList(list);
 return 0;
}

