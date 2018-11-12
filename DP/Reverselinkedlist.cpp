#include<iostream>
#include"list.h"
using namespace std;

void reverse(lnode &list)
{
  lnode prev = NULL;
    lnode curr = list;
    while(curr)
    {
      lnode next = curr->next ;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
   list = prev;
}

int main()
{
 lnode list = NULL;
   list = insert(list,3);
     insert(list,4);
     insert(list,11);
     insert(list,22);
     insert(list,99);
  reverse(list);
 display(list);
return 0;
}
