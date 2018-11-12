#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
 int data;
 struct node *next;
};
typedef struct node *lnode;

void push(lnode *list,int ele)
{
  lnode newnode = new node();
  newnode->data = ele;
  newnode->next = *list;

  *list = newnode;
}
void display(lnode list)
{
 while(list!=NULL)
 {
  cout<<list->data<<" ";
  list = list->next;
 }
 cout<<"\n";
}
void swapNodes(lnode *list,int x,int y)
{
  if(x==y)
   return ;

  lnode currX = *list,prevX = NULL;
  while(currX&&currX->data!=x)
  {
   prevX = currX;
   currX = currX->next;
  }

  lnode currY = *list,prevY = NULL;
  while(currY&&currY->data!=y)
  {
   prevY = currY;
   currY = currY->next;
  }

  if(currX==NULL || currY ==NULL)
    return ;

 if(prevX!=NULL)
  prevX->next = currY;
 else
  *list = currY;

 if(prevY!=NULL)
  prevY->next = currX;
 else
  *list = currX;

 lnode temp = currY->next;
 currY->next = currX->next;
 currX->next = temp;
}

int main()
{
  lnode list = NULL;
  push(&list,7);
  push(&list,6);
  push(&list,5);
  push(&list,4);
  push(&list,3);
  push(&list,2);
  push(&list,1);
  display(list);

  swapNodes(&list,4,3);
  display(list);
 return 0;
}
