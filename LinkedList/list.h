#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

typedef struct node *lnode;
lnode newNode(int ele)
{
 lnode newnode = new node();
 newnode->data = ele;
 newnode->next = NULL;
 return newnode;
}

lnode insert(lnode list ,int ele)
{
  if(list == NULL)
  {
   list = newNode(ele);
    return list;
  }
  else
  {
   list->next = insert(list->next,ele);
  }
return list;
}

void display(lnode list)
{
 int sum = 0;
 lnode temp = list;
 while(temp!=NULL)
 {
  cout<<temp->data<<"->";
   sum+=temp->data;
   temp = temp->next;
 }
 cout<<endl;
// return sum;
}

