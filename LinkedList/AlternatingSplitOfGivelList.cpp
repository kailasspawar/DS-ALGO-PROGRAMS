#include<iostream>
#include"list.h"
using namespace std;

void alternateSplit(lnode list,lnode &head)
{
   lnode temp = list;

   while(temp && temp->next)
   {
     head = insert(head,temp->next->data);
     temp->next = temp->next->next;
     temp = temp->next;
   }
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
        insert(list,0);
        insert(list,1);
        insert(list,0);
        insert(list,1);
        insert(list,0);
   lnode head = NULL;
  alternateSplit(list,head);
  display(list);
    display(head);
  return 0;
}
