#include<iostream>
#include"list.h"
using namespace std;

void reArrange(lnode list)
{
  lnode temp = list;
  while(temp && temp->next)
  {
    swap(temp->data,temp->next->data);
    temp = temp->next->next;
  }
// return list;
}

int main()
{
  lnode list  = NULL;
 list =  insert(list,10);
   insert(list,20);
     insert(list,30);
   insert(list,40);
  insert(list,50);
reArrange(list);
 display(list);
return 0;
}

