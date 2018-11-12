#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

typedef struct node *lnode;

lnode insert(lnode list,int data)
{
  if(!list)
  {
    lnode newnode = new node();
      newnode->data = data;
     newnode->next = NULL;
    return newnode;
  }
  else
     list->next = insert(list->next,data);

  return list;
}

void display(lnode list)
{
  while(list)
  {
    cout<<list->data<<" ";
    list = list->next;
  }
 cout<<endl;
}
