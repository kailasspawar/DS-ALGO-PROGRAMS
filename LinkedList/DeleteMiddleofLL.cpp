#include<iostream>
#include"list.h"
using namespace std;

void DeleteNode(lnode list)
{
  lnode slow = list;
     lnode fast = list;
  
  while(fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  slow->data = slow->next->data;
  slow->next = slow->next->next;
}

int main()
{
  lnode list = NULL;
    list =  insert(list,1);
       insert(list,2);
       insert(list,3);
       insert(list,4);
//       insert(list,5);
   DeleteNode(list);
  display(list);
 return 0;
}

        
