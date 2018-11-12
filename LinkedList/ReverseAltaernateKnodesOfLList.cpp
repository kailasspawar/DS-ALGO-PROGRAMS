#include<iostream>
#include"list.h"
using namespace std;

lnode reverseKAlt(lnode list,int k)
{

  lnode curr = list,prev = NULL,next;
 int count = 0;
  while(count < k&&curr!=NULL)
 {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
 }
 if(list!=NULL)
  list->next = curr;

 count = 0;
 while(count < k-1 && curr!=NULL)
 {
  curr = curr->next;
  count++;
 }
 if(curr!=NULL)
   curr->next = reverseKAlt(curr->next,k);

 return prev;
}

int main()
{
 lnode list = NULL;
 list = insert(list,10);
 list = insert(list,20);
 list = insert(list,30);
 list = insert(list,40);
 list = insert(list,50);
 list = insert(list,60);
 list = insert(list,70);
 list = insert(list,80);
 list = insert(list,90);
 list = insert(list,100);
 list = insert(list,101);
 list = insert(list,103);

 list = reverseKAlt(list ,3);

 display(list);

 return 0;
}
