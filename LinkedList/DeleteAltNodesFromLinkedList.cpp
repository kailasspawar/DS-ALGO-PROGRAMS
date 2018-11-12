#include<iostream>
#include"list.h"
using namespace std;

void deleteAlt(lnode list)
{
 if(list==NULL)
  return;

 lnode node = list->next;

 if(node==NULL)
  return ;

 list->next = node->next;
 delete [] node;

 deleteAlt(list->next);
}

int main()
{
 lnode list = NULL;
 list  = insert(list,1);
 list  = insert(list,2);
 list  = insert(list,3);
 list  = insert(list,4);
 list  = insert(list,5);
 list  = insert(list,6);

 deleteAlt(list);
 display(list);
 return 0;
}
