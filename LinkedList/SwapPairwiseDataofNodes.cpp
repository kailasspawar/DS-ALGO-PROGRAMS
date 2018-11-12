#include<iostream>
#include"list.h"
#include<algorithm>
void swapNodes(lnode list)
{
 while(list&&list->next)
 {
   swap(list->data,list->next->data);

   list = list->next->next;
 }
}
void swapRec(lnode list)
{
 if(list&&list->next)
{
 swap(list->data,list->next->data);
 swapRec(list->next->next);
}
}
int main()
{
 lnode list = NULL;
 list = insert(list,10);
 list = insert(list,11);
 list = insert(list,12);
 list = insert(list,13);
 list = insert(list,14);
 list = insert(list,15);
 list = insert(list,16);

 //swapNodes(list);
  swapRec(list);
 display(list);
 return 0;
}

