#include<iostream>
#include"list.h"
void deleteNode(lnode node)
{
  lnode temp = node->next;
  node->data = temp->data;
  node->next = temp->next;
  free(temp);
}

int main()
{
  lnode list = NULL;
  list = insert(list,10);
  list = insert(list,20);
  list = insert(list,40);
  list = insert(list,50);
  
  lnode ptr = list->next->next;
 deleteNode(ptr);
 display(list);
 return 0;
}
