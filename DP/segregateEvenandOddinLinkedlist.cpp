#include<iostream>
#include"list.h"
using namespace std;

lnode segregate(lnode list)
{
  lnode odds = NULL,odde = NULL;
  lnode curr = list;
  lnode evens = NULL;
  lnode evene = NULL;
  while(curr)
  {
    if(curr->data % 2 == 1 && !odds)
    {
      odds = curr;odde = curr;
      curr = curr->next;
    }
    else if(curr->data % 2 == 1 && odds)
    {
      odde->next = curr;
      odde = odde->next;
      curr = curr->next;
    }
   else
   {
     if(!evens)
     {
      evens = curr;
      evene = curr;
      curr = curr->next;
     }
    else
     {
       evene->next = curr;
       evene = evene->next;
       curr = curr->next;
     }
  }
 }
  evene->next = odds;
  odde->next = NULL;
 return  list = evens;
//  display(evens);
 }

int main()
{
 lnode list  = NULL;
 list = insert(list,17);
   insert(list,15);
  insert(list,8);
  insert(list,12);
  insert(list,10);
  insert(list,5);
  insert(list,4);
  insert(list,1);
  insert(list,7);
  insert(list,6);
  list = segregate(list);
 display(list);
return 0;
}

  
      
