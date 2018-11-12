#include<iostream>
#include"list.h"

lnode insertSorted(lnode list,int ele)
{
   lnode newnode = newNode(ele);
  if(list==NULL || newnode->data < list->data)
  {
   newnode->next = list;
   list = newnode;
   return list;
  }
  lnode temp = list;
  while(temp->next&&temp->next->data < newnode->data)
    temp = temp->next;

    newnode->next = temp->next;
       temp->next = newnode;
   return list;
}


int main()
{
 lnode list = NULL;
  list = insert(list,1);
  list = insert(list,2);
  list = insert(list,3);
  list = insert(list,7);
  list = insert(list,9);
  list = insert(list,14);
 display(list);
 list = insertSorted(list,8);
   display(list);

  return 0;
}
