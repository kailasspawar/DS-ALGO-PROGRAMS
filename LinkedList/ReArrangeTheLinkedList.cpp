#include<iostream>
#include"list.h"
using namespace std;

lnode reverse(lnode list)
{
  if(!list)
    return NULL;

  lnode curr = list;
  lnode prev = NULL;
 while(curr)
 { 
   lnode next = curr->next;
   curr->next = prev;
   prev = curr;
   curr = next;
 }
return prev;
}
void reArrange(lnode list)
{
  lnode fast = list,slow = list;
  while(fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  lnode head1 = list;
  lnode head2 = slow->next;
  slow->next  = NULL;
  head2 = reverse(head2);
  
  list = newNode(0);
  lnode curr = list;
  while(head1 || head2)
  {
    if(head1)
    {
      curr->next = head1;
      curr = curr->next;
      head1 = head1->next;
    }
    if(head2)
    {
     curr->next = head2;
     curr = curr->next;
     head2 = head2->next;
    }
  }
 list = list->next;
}


int main()
{
  lnode list = NULL;
  list = insert(list,1);
         insert(list,2);
	 insert(list,3);
	 insert(list,4);
	 insert(list,5); 
   reArrange(list);
   display(list);
  return 0;
}
  


