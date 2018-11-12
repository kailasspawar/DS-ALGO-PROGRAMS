#include<iostream>
#include"ll.h"
using namespace std;

lnode reversek(lnode list,int k)
{
  if(!list)  
   return NULL;

  lnode prev = NULL,curr = list,next;
  int count = 0;
  while(count < k && curr)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }
  if(curr)
    list->next = reversek(curr,k);

 return prev;
}

int main()
{
  lnode list = NULL;
    list = insert(list,10);
        insert(list,20);
     insert(list,30);
   insert(list,40);
  insert(list,50);
       insert(list,60);
          insert(list,70);
   list = reversek(list,3);
  display(list);
 return 0;
}
