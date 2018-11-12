#include<iostream>
#include"list.h"

Node * merge(Node * list1,Node * list2,Node * list3)
{
  Node * newnode;
  if(list1==NULL && list2==NULL)
   return NULL; 
  if(list1==NULL&&list2!=NULL)
  {
    newnode = newNode(list2->data);
 //  newnode->next = list3;
    list3 = newnode;
   return list3;
  }
  else
  if(list1!=NULL&&list2==NULL)
  {
   Node * newnode = newNode(list1->data);
     list3 = newnode;
    return list3;
  }
    if(list1->data < list2->data)
    {
      newnode = newNode(list1->data);
      newnode->next = list3;
      list3 = newnode;
     list3->next = merge(list1->next,list2,list3->next);
    }
    if(list1->data > list2->data)
    {
      newnode = newNode(list2->data);
      newnode->next = list3;
      list3 = newnode;
     list3->next = merge(list1,list2->next,list3->next);
    }
 // list3->next = merge(list1->next,list2->next,list3->next);
  return list3;
}

int main()
{
  Node * list1 = NULL,list2 =NULL,list3 = NULL;
 list1 = insert(list1,5);
 list1 = insert(list1,10);
 list1 = insert(list1,15);
   list2 = insert(list2,2);
   list2 = insert(list2,3);
   list2 = insert(list2,20);
  list3 = merge(list1,list2,list3);
 display(list3);
return 0;
}
