#include<iostream>
#include"list.h"
using namespace std;

void removeDupli(lnode list)
{
  if(!list)
   return ;

  lnode curr = list;
  while(curr->next)
  { 
    if(curr->data == curr->next->data)
    {
     lnode next = curr->next->next;
     delete [] curr->next;
     curr->next = next;
    }
    else 
     curr = curr->next;
  }
}

int main()
{
  lnode list = NULL;
  list = insert(list,11);
     insert(list,11);
        insert(list,11);
  insert(list,43);
 insert(list,41);
   insert(list,41);
  insert(list,42);
 removeDupli(list);
 display(list);
 return 0;
}
