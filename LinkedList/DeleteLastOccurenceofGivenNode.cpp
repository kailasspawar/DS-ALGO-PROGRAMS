#include<iostream>
#include"list.h"
using namespace std;

void deleteLastOccur(lnode list,int data)
{
  lnode prev ;
  lnode curr = list;
  while(curr)
  {
    if(curr->data == data)
      prev = curr;

    curr = curr->next;
  }
  if(prev->next) 
  {
    prev->data = prev->next->data;
      prev->next = prev->next->next;
  }
  else
   prev = NULL;
 
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
         insert(list,2);
         insert(list,3);
         insert(list,5);
         insert(list,2);
         insert(list,10);
  deleteLastOccur(list,2);
 display(list);
return 0;
}

