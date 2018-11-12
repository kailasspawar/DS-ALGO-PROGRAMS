#include<iostream>
#include"list.h"
using namespace std;

void swapList(lnode list)
{
  lnode temp = list;
  while(temp)
  {
   if(temp->next)
   {
    swap(temp->data,temp->next->data);
    temp = temp->next->next;
   }
   else
     temp = temp->next;
  }
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
        insert(list,2);
        insert(list,3);
        insert(list,4);
  swapList(list);
 display(list);
 return 0;
}

