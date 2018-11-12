#include<iostream>
#include"list.h"
using namespace std;

void swapNodes(lnode *list)
{
 if(*list==NULL || (*list)->next == NULL)
  return;

  lnode curr = (*list)->next;
  lnode prev = *list;
  *list = curr;

  while(true)
  {
    lnode next = curr->next;
    curr->next = prev;
    if(next==NULL || next->next==NULL)
    {
     prev->next = next;
     break;
    }
    prev->next = next->next;
    prev = next;
    curr = prev->next;
}
}

int main()
{
 lnode list = NULL;
 list = insert(list,1);
        insert(list,2);
        insert(list,3);
        insert(list,4);
        insert(list,5);
        insert(list,6);
        insert(list,7);
        insert(list,8);
        insert(list,9);
   swapNodes(&list);
    display(list);
  return 0;
}
