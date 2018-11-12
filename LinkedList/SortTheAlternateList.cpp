#include<iostream>
#include"list.h"
using namespace std;
lnode merge(lnode list1,lnode list2)
{
  if(!list1)
   return list2;
  if(!list2)
   return list1;
  lnode temp = NULL;
  if(list1->data < list2->data)
  {
    temp = list1;
    temp->next = merge(list1->next,list2);
  }
  else
  {
    temp = list2;
    temp->next = merge(list1,list2->next);
  }
 return temp;
}

void reverse(lnode &list)
{
  lnode curr = list;
   lnode prev = NULL;
   while(curr)
   {
     lnode next = curr->next;
     curr->next = prev;
     prev = curr;
     curr = next;
   }
  list = prev;
}

void splitList(lnode list,lnode &alist,lnode &dlist)
{
  alist = newNode(0);
    dlist = newNode(0);
   lnode asc = alist;
   lnode desc = dlist;
   lnode curr = list;
   
  while(curr)
  {
    asc->next = curr;
    asc = asc->next;
    curr = curr->next;
    if(curr)
    {
     desc->next = curr;
     desc = desc->next;
     curr = curr->next;
    }
  }

  asc->next = NULL;
  desc->next = NULL;

  alist = alist->next;
  dlist = dlist->next;
}
void sortList(lnode list)
{
  lnode alist = NULL;
    lnode dlist = NULL;
  splitList(list,alist,dlist);
  reverse(dlist);
  list = merge(alist,dlist);
}
int main()
{
  lnode list = NULL;
  list = insert(list,10);
         insert(list,53);
         insert(list,43);
         insert(list,30);
         insert(list,67);
         insert(list,12);
         insert(list,89);
     sortList(list);
    display(list);
 return 0;
}




