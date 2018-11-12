#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

typedef struct node *lnode;

lnode newNode(int data)
{
  lnode newnode = new node();
     newnode->data = data;
  newnode->next = NULL;
 return newnode;
}

lnode insert(lnode list,int data)
{
  if(!list)
   return  list = newNode(data);
  else
   list->next = insert(list->next,data);
}

void display(lnode list)
{
 lnode temp = list;
 while(temp)
 {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
cout<<endl;
}


