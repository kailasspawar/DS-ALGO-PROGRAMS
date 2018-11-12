#include<iostream>
#include"list.h"
using namespace std;

lnode reversekNodes(lnode list,int k)
{
  int count = 0;
 lnode curr= list , next = NULL;
lnode   prev = NULL;
  while(curr && count < k)
  {
     next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
   count++;
  }
  count = 0;
 if(list)
  list->next = curr;
  while(curr && count < k-1)
  { 
    curr = curr->next;
    count++;
  }
  if(curr)
    curr->next  = reversekNodes(curr->next,k);
 
  return prev;
}

int main()
{
 lnode list  = NULL;
   list = insert(list,3);
      insert(list,1);
      insert(list,2);
      insert(list,7);
      insert(list,5);
      insert(list,9);
   list = reversekNodes(list,2);
  display(list);
 return 0;
 }
