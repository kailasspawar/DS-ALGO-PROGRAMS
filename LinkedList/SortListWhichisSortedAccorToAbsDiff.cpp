#include<iostream>
#include"list.h"
using namespace std;

void sortList(lnode &list)
{
  lnode prev = list; 
    lnode curr = list->next;
  while(curr)
  {
    if(curr->data < prev->data)
    {
      prev->next = curr->next;
      curr->next = list;
      list = curr;

      curr = prev;
    }
    else
       curr = prev;

    curr = curr->next;
  }
}

int main()
{
  lnode list = NULL;
     list = insert(list,1);
            insert(list,-2);
            insert(list,-3);
            insert(list,-4);
            insert(list,-5);
  sortList(list);
 display(list);
return 0;
}

