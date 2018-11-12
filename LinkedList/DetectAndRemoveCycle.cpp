#include<iostream>
#include"list.h"
using namespace std;
void detectAndRemoveCycle(lnode list)
{
  if(list==NULL || list->next==NULL)
   return;

  lnode fast = list,slow = list;
  slow = slow->next;
   fast = fast->next->next;
  while(fast&&fast->next)
  {
    if(fast==slow)
     break;
    slow = slow->next;
    fast = fast->next->next;
  }

  if(slow==fast)
  {
    slow = list;
    while(slow->next!=fast->next)
    {
     slow = slow->next;
     fast = fast->next;
    }
   fast->next = NULL;
   cout<<"Cycle removed\n";
 }
}

int main()
{
  lnode list = NULL;
  list = insert(list,10);
  list = insert(list,20);
  list = insert(list,30);
  list = insert(list,40);
  list = insert(list,50);

  list->next->next->next->next->next = list->next->next;
 detectAndRemoveCycle(list);
  display(list);

 return 0;
}

