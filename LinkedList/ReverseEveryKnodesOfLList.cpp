#include<iostream>
#include"list.h"
using namespace std;

lnode reverse(lnode list,int k)
{
  lnode curr = list,prev = NULL,next;
  int count = 0;
  while(curr!=NULL && count < k)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }
  if(next!=NULL)
   list->next = reverse(next,k);
 return prev;
}

int main()
{
 lnode list = NULL;
 list = insert(list,1);
        insert(list,2);
        insert(list,3);
        insert(list,4);
        insert(list,5);
        insert(list,6);
        insert(list,7);
        insert(list,8);
  cout<<"After Reversing k nodes\n";
  list =   reverse(list,3);
    display(list);
   return 0;
}

