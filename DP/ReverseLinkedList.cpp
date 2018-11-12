#include<iostream>
#include"list.h"

void reverse(lnode &list)
{
 if(!list)
  return ;

 lnode prev = NULL;
   lnode curr = list;
  while(curr)
  {
    lnode next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
 list = prev;
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
     insert(list,2);
        insert(list,3);
    insert(list,4);
   insert(list,5);
  reverse(list);
 display(list);
 return 0;
}
