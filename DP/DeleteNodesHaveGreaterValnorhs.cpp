#include<iostream>
#include"list.h"
using namespace std;

void reverse(lnode &list)
{
  lnode prev = NULL,curr = list;
  while(curr)
  {
   lnode next = curr->next;
   curr->next = prev;
   prev = curr;
   curr  = next;
  }
 list = prev;
}
void deleteGr(lnode list)
{
  lnode maxnode = list,curr = list;
  lnode temp;
  while(curr && curr->next)
  {
    if(curr->next->data < maxnode->data)
    {
       temp = curr->next;
      curr->next = temp->next;
       free(temp);
    }
    else
    {
      curr = curr->next;
      maxnode = curr;
    }
  }
}
void deleteNode(lnode &list)
{
  reverse(list);
  deleteGr(list);
  reverse(list);
}
int main()
{
 lnode list  = NULL;
  list = insert(list,12);
    insert(list,15);
    insert(list,10);
    insert(list,11);
    insert(list,5);
    insert(list,6);
    insert(list,2);
  deleteNode(list);
 display(list);
 return 0;
}
