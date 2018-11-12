/*
Input:
  First List: 5->6->3  // represents number 365
  Second List: 8->4->2 //  represents number 248
Output
  Resultant list: 3->1->6  // represents number 613
*/
#include<iostream>
#include"list.h"

lnode addLists(lnode a,lnode b)
{
  if(a == NULL && b == NULL)
   return NULL;
  int carry = 0,sum = 0;
  lnode list = NULL;
 while(a!=NULL || b!=NULL)
 {
   sum = carry + (a ? a->data : 0) + (b ? b->data : 0);
   carry = (sum >=10) ? 1 : 0;

   sum = sum % 10;
   list = insert(list,sum);
  if(a) a = a->next;
  if(b) b = b->next;
 }
 if(carry > 0)
  list = insert(list,carry);

 return list;
}
int main()
{
 lnode list = NULL;
 lnode list2 = NULL;
 lnode list3 = NULL;
 list = insert(list,7);
 list = insert(list,5);
 list = insert(list,9);
 list = insert(list,4);
 list = insert(list,6);

 list2 = insert(list2,8);
 list2 = insert(list2,4);

 list3 = addLists(list,list2);
 display(list3);

 return 0;
}
