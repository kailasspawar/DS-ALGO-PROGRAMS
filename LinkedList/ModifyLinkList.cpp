#include<iostream>
#include"list.h"
using namespace std;

lnode reverse(lnode list)
{
  lnode curr = list;
  lnode prev  = NULL;
    lnode next;
  while(curr)
  {
     next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
 return prev;
}
void modify(lnode &list)
{
  lnode temp  = list;
    lnode temp1 = list;
  
   while(temp&&temp->next)
   {
     temp1 = temp1->next;
     temp = temp->next->next;
   }
   temp1 = reverse(temp1); 
}

int main()
{
  lnode list = NULL;
 list  =  insert(list,10);
  insert(list,4);
   insert(list,5);
   insert(list,3);
   insert(list,6);
   insert(list,11);

  modify(list);
 display(list);
 return 0;
}

