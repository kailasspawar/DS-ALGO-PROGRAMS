#include<iostream>
#include"list.h"
using namespace std;
void reverse(lnode &list)
{
  lnode curr = list;
   lnode prev = NULL;
  while(curr)
  {
    lnode next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
 list = prev;
}
lnode mergeLists(lnode list1,lnode list2)
{
  reverse(list1);
    reverse(list2);

  lnode temp = NULL;
  while(list1 || list2)
  {
    if(list1 && list2)
    {
      if(list1->data > list2->data)
      {
         temp = insert(temp,list1->data);
       	list1 = list1->next;
      }
      else
      {
        temp = insert(temp,list2->data);
        list2 = list2->next;
       }
     }
     else 
     {
      if(list1 && !list2)
      {
         temp = insert(temp,list1->data);
         list1 = list1->next; 
      }
      else
      {
       temp = insert(temp,list2->data);
       list2 = list2->next;
      }
     }
  }
 return temp;
}

int main()
{
  lnode list = NULL;
   list = insert(list,5);
      insert(list,10);
      insert(list,15);
      insert(list,40);
  lnode list1 = NULL;
   list1 = insert(list1,2);
        insert(list1,3);
        insert(list1,20); 
    lnode l = NULL;
   l = mergeLists(list,list1);
   display(l);
  return 0;
}

