#include<iostream>
#include"list.h"
using namespace std;
/*
void deleteNode(lnode list)
{
  if(list==NULL||list->next==NULL)
    return ;

  if(list->next->data > list->data)
  {
   lnode temp = list->next ;
   list->data = temp->data;
   list->next = temp->next;
   delete [] temp;
  }
  else
   list = list->next;
 
  deleteNode(list);
}
*/
void reverse(lnode *list)
{
  lnode curr = *list,prev = NULL,next;
  while(curr!=NULL)
  {
   next = curr->next;
   curr->next = prev;
   prev = curr;
   curr = next;
  }
 *list = prev;
}
void _deleteNode(lnode list)
{
  lnode curr = list;
  lnode maxnode = list,temp;
  while(curr!=NULL && curr->next!=NULL)
  {
    if(curr->next->data < maxnode->data)
    {
     temp  = curr->next;
     curr->next = temp->next;
     delete [] temp;
    }
    else
    {
     curr = curr->next;
     maxnode = curr;
    }
 }
}
void deleteNode(lnode *list)
{
   reverse(list);

   _deleteNode(*list);

   reverse(list);
}
int main()
{
  lnode list = NULL;
  list = insert(list,10);
   list = insert(list,20);
     list = insert(list,30);
    list = insert(list,40);
   list = insert(list,50);
    list = insert(list,60);
      list = insert(list,70);
   list = insert(list,80);
  lnode list1 = NULL;
   list1 = insert(list1,40);
   list1 = insert(list1,30);
   list1 = insert(list1,20);
  deleteNode(&list);
  display(list);
  return 0;
}
